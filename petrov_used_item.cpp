#include "petrov_used_item.h"
#include "petrov_header.h"
#include <fstream>

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

ofstream &operator<<(ofstream &fout, const used_item &ui) {
  boost::archive::text_oarchive oa(fout);
  oa << ui;
  return fout;
}

ifstream &operator>>(ifstream &fin, used_item &ui) {
  boost::archive::text_iarchive ia(fin);
  ia >> ui;
  return fin;
}
