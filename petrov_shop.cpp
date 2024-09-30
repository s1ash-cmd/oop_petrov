#include "petrov_shop.h"
#include "petrov_item.h"
#include "petrov_used_item.h"

#include <fstream>
#include <iostream>
#include <memory>
#include <vector>

BOOST_CLASS_EXPORT_GUID(item, "item")
BOOST_CLASS_EXPORT_GUID(used_item, "used_item")

using namespace std;

void shop::display_menu() {
  cout << "\n_____меню_____" << endl;
  cout << "\n1) Добавить товар" << endl;
  cout << "2) Добавить б/у товар" << endl;
  cout << "3) Показать все товары" << endl;
  cout << "4) Сохранить в файл" << endl;
  cout << "5) Загрузить из файла" << endl;
  cout << "6) Очистить список " << endl;
  cout << "0) Выход" << endl;
  cout << "===============================" << endl;
  cout << "Выберите пункт меню: ";
}

void shop::add_item() {
  shared_ptr<item> new_item = make_shared<item>();
  new_item->input(cin);
  items.push_back(new_item);
}

void shop::add_used_item() {
  shared_ptr<used_item> new_used_item = make_shared<used_item>();
  new_used_item->input(cin);
  items.push_back(new_used_item);
}

void shop::items_output() {
  if (items.empty()) {
    cout << "\nТовары отсутствуют" << endl;
  } else {
    for (const shared_ptr<item> &i : items) {
      i->output(cout << endl);
    }
  }
}

void shop::items_write() {
  if (items.empty()) {
    cout << "\nТовары отсутствуют" << endl;
    return;
  }

  string filename;
  cout << "Введите имя файла: ";
  cin.ignore();
  getline(cin, filename);

  ofstream fout(filename);
  if (!fout) {
    cerr << "Невозможно открыть файл" << endl;
    return;
  }

  boost::archive::text_oarchive oa(fout);
  oa << items;

  fout.close();
  cout << "Товары сохранены в файл" << endl;
}

void shop::items_read() {
  string filename;
  cout << "Введите имя файла: ";
  cin.ignore();
  getline(cin, filename);

  ifstream fin(filename);
  if (!fin) {
    cerr << "Невозможно открыть файл" << endl;
    return;
  }

  try {
    boost::archive::text_iarchive ia(fin);
    ia >> items;
  } catch (const exception &e) {
    cerr << "Ошибка чтения из файла: " << e.what() << endl;
    fin.close();
    return;
  }

  fin.close();
  cout << "Товары успешно загружены из файла." << endl;
}

void shop::items_clear() {
  if (items.empty()) {
    cout << "\nТовары отсутствуют" << endl;
  } else {
    items.clear();
    cout << "\nСписок очищен" << endl;
  }
}
