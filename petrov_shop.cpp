#include "petrov_item.h"
#include "petrov_shop.h"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void shop::display_menu() {
  cout << "\n_____меню_____" << endl;
  cout << "1) Добавить товар" << endl;
  cout << "2) Показать все товары" << endl;
  cout << "3) Сохранить в файл" << endl;
  cout << "4) Загрузить из файла" << endl;
  cout << "5) Очистить список " << endl;
  cout << "0) Выход" << endl;
  cout << "===============================" << endl;
  cout << "Выберите пункт меню: ";
}

void shop::items_output(vector<item>& items) {
  if (items.empty()){
    cout << "\nТовары отсутствуют" << endl;
  }
  else{
    for (auto i : items) {
      cout << i << endl;
    }
  }
}

void shop::items_write(vector<item>& items) {
  if (items.empty()) {
    cout << "\nСписок товаров пуст" << endl;
    return;
  }

  string filename;
  cout << "Введите имя файла: ";
  cin >> filename;

  ofstream fout(filename);
  if (!fout) {
    cerr << "Невозможно отркыть файл" << endl;
    return;
  }

  for (auto& i : items) {
    fout << i;
  }

  cout << "\nТовары сохранены в файл" << endl;
}

void shop::items_read(vector<item>& items) {
  string filename;
  cout << "Введите имя файла для чтения: ";
  cin >> filename;

  ifstream fin(filename);
  if (!fin) {
    cerr << "Невозможно открыть файл" << endl;
    return;
  }

  items.clear();
  item i;
  while (fin >> i) {
    items.push_back(i);
  }

  cout << "\nТовары загружены" << endl;
}

void shop::items_clear(vector<item>& items) {
  if (items.empty()){
    cout << "\nТовары отсутствуют" << endl;
  }
  else{
    items.clear();
    cout << "\nСписок очищен" << endl;
  }
}
