#ifndef PETROV_SHOP_H
#define PETROV_SHOP_H

#include "petrov_header.h"
#include "petrov_item.h"
#include "petrov_used_item.h"

#include <memory>
#include <vector>

using namespace std;

class shop {

private:
  vector<shared_ptr<item>> items;

public:
  ~shop() { items_clear(); }

  void display_menu();

  void add_item();
  void add_used_item();

  void items_output();
  void items_clear();

  void items_write();
  void items_read();
};

#endif // PETROV_SHOP_H
