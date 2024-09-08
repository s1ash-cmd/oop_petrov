#include <iostream>
#include "petrov_item.h"
#include "petrov_header.h"
#include "petrov_shop.h"

#include <vector>

using namespace std;

int main()
{

  shop s;
  vector<item> items;

  for(;;){
    s.display_menu();
    int menu_item = check_input(0, 5);

    switch(menu_item){
      case 1:{
        item i;
        cin >> i;
        items.push_back(i);
        break;
      }

      case 2:{
        s.items_output(items);
        break;
      }

      case 3:{
        s.items_write(items);
        break;
      }

      case 4:{
        s.items_read(items);
        break;
      }

      case 5:{
        s.items_clear(items);
        break;
      }

      case 0:
        exit(0);
    }
  }

  return 0;
}
