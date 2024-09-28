#include "petrov_item.h"
#include "petrov_header.h"
#include <fstream>

using namespace std;

void item::input(istream &in) {
  cout << "\nВведите название товара: ";
  in.ignore();
  getline(in, name);

  cout << "Введите вес товара (в килограммах): ";
  weight = check_input(0.0, 1000.0);

  cout << "Введите ширину товара (в сантиметрах): ";
  width = check_input(0.0, 2000.0);

  cout << "Введите высоту товара (в сантиметрах): ";
  height = check_input(0.0, 2000.0);

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

ofstream &operator<<(ofstream &fout, const item &i) {
  boost::archive::text_oarchive oa(fout);
  oa << i;
  return fout;
}

ifstream &operator>>(ifstream &fin, item &i) {
  boost::archive::text_iarchive ia(fin);
  ia >> i;
  return fin;
}
