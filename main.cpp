#include "petrov_shop.h"
#include "petrov_header.h"

using namespace std;

int main()
{
  shop s;

  for(;;){
    s.display_menu();
    int menu_item = check_input(0, 5);

    switch(menu_item) {
      case 1: {
        s.add_item();
        break;
      }
      case 2: {
        s.items_output();
        break;
      }
      case 3: {
        s.items_write();
        break;
      }
      case 4: {
        s.items_read();
        break;
      }
      case 5: {
        s.items_clear();
        break;
      }
      case 0:
        exit(0);
    }
  }

  return 0;
}
