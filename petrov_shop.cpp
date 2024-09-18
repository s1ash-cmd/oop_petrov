#include "petrov_item.h"
#include "petrov_shop.h"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void shop::display_menu() {
    cout << "\n_____меню_____" << endl;

    cout << "\n1) Добавить товар" << endl;
    cout << "2) Показать все товары" << endl;
    cout << "3) Сохранить в файл" << endl;
    cout << "4) Загрузить из файла" << endl;
    cout << "5) Очистить список " << endl;
    cout << "0) Выход" << endl;
    cout << "===============================" << endl;
    cout << "Выберите пункт меню: ";
}

void shop::add_item() {
    item* new_item = new item;
    cin >> *new_item;
    items.push_back(new_item);
}

void shop::items_output() {
    if (items.empty()) {
        cout << "\nТовары отсутствуют" << endl;
    } else {
        for (auto i : items) {
            cout << *i << endl;
        }
    }
}

void shop::items_write() {
    if (items.empty()) {
        cout << "\nТовары отсутствуют" << endl;
        return;
    }

    string filename;
    cout << "Введите имя файла: ";
    cin.ignore();
    getline(cin, filename);

    ofstream fout(filename);
    if (!fout) {
        cerr << "Невозможно открыть файл" << endl;
        return;
    }

    for (auto i : items) {
        fout << *i;
    }

    cout << "\nТовары сохранены в файл" << endl;

    fout.close();
}

void shop::items_read() {
    string filename;
    cout << "Введите имя файла для чтения: ";
    cin.ignore();
    getline(cin, filename);

    ifstream fin(filename);
    if (!fin) {
        cout << "Невозможно открыть файл" << endl;
        return;
    }

    items_clear();

    bool read_error = false;

    while (fin) {
        item* i = new item;

        if (fin >> *i) {
            items.push_back(i);
        } else {
            if (fin.eof()) {
                delete i;
                break;
            }
            cout << "Ошибка чтения данных" << endl;
            read_error = true;
            items_clear();
            delete i;
            break;
        }
    }

    if (!read_error) {
        cout << "\nТовары загружены" << endl;
    }

    fin.close();
}

void shop::items_clear() {
    if (items.empty()) {
        cout << "\nТовары отсутствуют" << endl;
    } else {
        for (auto i : items) {
            delete i;
        }
        items.clear();
        cout << "\nСписок очищен" << endl;
    }
}
