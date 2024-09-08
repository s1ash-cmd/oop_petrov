#include "petrov_item.h"
#include "petrov_header.h"

#include <iostream>
#include <fstream>

using namespace std;

istream& operator>>(istream& in, item& i) {
  cout << "\nВведите название товара: ";
  in.ignore();
  getline(cin, i.name);

  cout << "Введите вес товара (в килограммах): ";
  i.weight = check_input(0.0, 1000.0);

  cout << "Введите ширину товара (в сантиметрах): ";
  i.width = check_input(0.0, 2000.0);

  cout << "Введите высоту товара (в сантиметрах): ";
  i.height = check_input(0.0, 2000.0);

  cout << "Введите цену товара (в рублях): ";
  i.price = check_input(0, 1000000);

  cout << "Товар в наличии? (1 - да, 0 - нет): ";
  i.stock = check_input(0, 1);

  return in;
}

ostream& operator<<(ostream& out, item& i) {
  out << "\nНазвание: " << i.name << endl;
  out << "Вес: " << i.weight << " кг" << endl;
  out << "Ширина: " << i.width << " см" << endl;
  out << "Высота: " << i.height << " см" << endl;
  out << "Цена: " << i.price << " руб" << endl;
  out << "В наличии: " << (i.stock ? "Да" : "Нет") << endl;
  return out;
}

ofstream& operator<<(ofstream& fout, item& i) {
  fout << i.name << endl << i.weight << endl << i.width << endl << i.height << endl << i.price << endl << i.stock << endl;
  return fout;
}

ifstream& operator>>(ifstream& fin, item& i) {
  getline(fin, i.name);
  fin >> i.weight >> i.width >> i.height >> i.price >> i.stock;
  fin.ignore(); 
  return fin;
}
