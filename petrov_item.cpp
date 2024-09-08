#include "petrov_item.h"
#include "petrov_header.h"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

item::item(){}

void input_item(item &i) {
    cout << "\nВведите название товара: ";
    cin.ignore();
    getline(cin, i.name);
    cout << "Введите вес товара (в килограммах): ";
    i.weight = check_input(0.0, 1000.0);
    cout << "Введите ширину товара (в сантиметрах): ";
    i.width = check_input(0.0, 2000.0);
    cout << "Введите высоту товара (в сантиметрах): ";
    i.height = check_input(0.0, 2000.0);
    cout << "Введите цену товара (в рублях): ";
    i.price = check_input(0, 1000000);
    cout << "Товар в наличии? (1 - да, 0 - нет): ";
    i.stock = check_input(0, 1);
}

void display_items(const vector<item> &items) {
    for (const auto &i : items) {
        cout << "\nНазвание: " << i.name << endl;
        cout << "Вес: " << i.weight << endl;
        cout << "Ширина: " << i.width << endl;
        cout << "Высота: " << i.height << endl;
        cout << "Цена: " << i.price << endl;
        cout << "В наличии: " << (i.stock ? "Да" : "Нет") << endl;
    }
}

void file_write(const vector<item> &items) {
    ofstream fout;
    string filename;

    if (items.empty()){
        cout << "\nТовары отсутствуют" << endl;
    }
    else{
        cout << "Введите имя файла: ";
        cin >> filename;
        fout.open(filename);

        if (!fout.is_open()) {
            cout << "Не удалось открыть файл " << filename << endl;
            return;
        }

        else{
            fout << items.size() << endl;
            for (const auto &i : items) {
                fout << i.name << endl;
                fout << i.weight << endl;
                fout << i.width << endl;
                fout << i.height << endl;
                fout << i.price << endl;
                fout << i.stock << endl;
            }

            fout.close();
        }
    }
}

void file_read(){

}
