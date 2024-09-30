#include "petrov_used_item.h"
#include "petrov_header.h"

using namespace std;

void used_item::input(istream &in) {
  item::input(in);

  cout << "Введите возраст товара (в годах): ";
  age = check_input(0, 10000);

  cout << "Введите состояние товара (0.0 - 10.0): ";
  condition = check_input(0.0, 10.0);

  cout << "Введите описание товара: ";
  in.ignore();
  getline(in, description);
}

void used_item::output(ostream &out) const {
  item::output(out);
  out << "Возраст: " << age << " год(а)/лет" << endl;
  out << "Состояние: " << condition << " из 10" << endl;
  out << "Описание: " << description << endl;
}
