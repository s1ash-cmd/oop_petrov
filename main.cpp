#include <iostream>
#include "petrov_item.h"
#include "petrov_header.h"
#include "petrov_shop.h"

#include <vector>
#include <fstream>

using namespace std;

int main()
{
  vector<item> items;
  shop s;

  for(;;){
    s.display_menu();
    int menu_item = check_input(0, 4);

    switch(menu_item){
      case 1:{
        item new_item;
        input_item(new_item);
        items.push_back(new_item);
        break;
      }

      case 2:{
        display_items(items);
        break;
      }

      case 3:{
        file_write(items);
        break;
      }

      case 4:{
         
        break;
      }

      case 0:
        exit(0);
    }
  }

  return 0;
}
