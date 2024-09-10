#ifndef PETROV_SHOP_H
#define PETROV_SHOP_H

#include "petrov_item.h"
#include <iostream>
#include <vector>

using namespace std;

class shop {
private:
  vector<item*> items;

public:
  ~shop() {items_clear();}

  void display_menu();
  void items_output();
  void items_write();
  void items_read();
  void items_clear();
  void add_item();
};

#endif // PETROV_SHOP_H
