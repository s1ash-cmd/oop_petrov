#include "petrov_item.h"
#include "petrov_header.h"
#include "petrov_shop.h"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void shop::display_menu() {
    cout << "\n_____меню_____" << endl;
    cout << "1) Добавить товар" << endl;
    cout << "2) Показать все товары" << endl;
    cout << "3) Сохранить в файл" << endl;
    cout << "4) Загрузить из файла" << endl;
    cout << "0) Выход" << endl;
    cout << "===============================" << endl;
    cout << "Выберите пункт меню: ";
}
