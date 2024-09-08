#ifndef PETROV_SHOP_H
#define PETROV_SHOP_H

#include <iostream>

using namespace std;

class shop{
public:
  void display_menu();
  void items_output(vector<item>& items);
  void items_write(vector<item>& items);
  void items_read(vector<item>& items) ;
  void items_clear(vector<item>& items);
};

#endif // PETROV_SHOP_H
