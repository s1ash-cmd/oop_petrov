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
  ofstream fout;
  string filename;

  if (items.empty()){
    cout << "\nТовары отсутствуют" << endl;}

  else{
    cout << "\nВведите имя файла: ";

    cin >> filename;
    fout.open(filename, ofstream::trunc);

    if(fout.is_open()){
      fout << items.size() << endl;
      for (auto i : items) {
        fout << i << endl;
      }
      cout << "\nЗапись выполнена" << endl;

    }
    else{
      cout << "\nФайл не может быть открыт" << endl;
    }

    fout.close();
  }
}

void shop::items_read(vector<item>& items) {
  ifstream fin;
  string filename;
  string line;

  int item_count;

  cout << "\nВведите имя файла: ";
  cin >> filename;

  fin.open(filename, ifstream::in);
  if (fin.is_open()){
    if (fin.peek() == ifstream::traits_type::eof()) {
      cout << "\nНеверное имя файла или файл пуст" << endl;
    }
    else{
      fin >> item_count;

      for (int i = 1; i <= item_count; i++) {
        item it;
        fin >> it;
        items.push_back(it);
      }
      cout << "\nЗагрузка выполнена" << endl;
    }

  }
  else{
    cout << "\nФайл не может быть открыт" << endl;
  }
  fin.close();
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
