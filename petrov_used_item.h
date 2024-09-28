#ifndef PETROV_USED_ITEM_H
#define PETROV_USED_ITEM_H

#include "petrov_header.h"
#include "petrov_item.h"

#include <string>

using namespace std;

class used_item : public item {
protected:
  int age = 0;
  int condition = 0;
  string description = "";

public:
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    ar &boost::serialization::base_object<item>(*this);
    ar & age;
    ar & condition;
    ar & description;
  }

  void input(istream &in) override;
  void output(ostream &out) const override;

  friend ofstream &operator<<(ofstream &fout, const used_item &ui);
  friend ifstream &operator>>(ifstream &fin, used_item &ui);
};

#endif // PETROV_USED_ITEM_H
