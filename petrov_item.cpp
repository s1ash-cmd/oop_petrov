#include "petrov_item.h"
#include "petrov_header.h"

using namespace std;

void item::input(istream &in) {
  cout << "\nВведите название товара: ";
  in.ignore();
  getline(in, name);

  cout << "Введите вес товара (в килограммах): ";
  weight = check_input(0.0, 10000.0);

  cout << "Введите ширину товара (в сантиметрах): ";
  width = check_input(0.0, 5000.0);

  cout << "Введите высоту товара (в сантиметрах): ";
  height = check_input(0.0, 5000.0);

  cout << "Введите цену товара (в рублях): ";
  price = check_input(0, 1000000000);

  cout << "Товар в наличии? (1 - да, 0 - нет): ";
  stock = check_input(0, 1);
}

void item::output(ostream &out) const {
  out << "\nНазвание: " << name << endl;
  out << "Вес: " << weight << " кг" << endl;
  out << "Ширина: " << width << " см" << endl;
  out << "Высота: " << height << " см" << endl;
  out << "Цена: " << price << " руб" << endl;
  out << "В наличии: " << (stock ? "Да" : "Нет") << endl;
}
