#ifndef PETROV_ITEM_H
#define PETROV_ITEM_H

#include <string>
#include <vector>

using namespace std;

class item {
public:
    string name = "";
    double weight = 0.0;
    double width = 0.0;
    double height = 0.0;
    int price = 0;
    bool stock = 0;

    item();
};

void input_item(item &i);
void display_items(const vector<item> &items);

void file_write(const vector<item> &items);
void file_read(vector<item> &items);

#endif // PETROV_ITEM_H
