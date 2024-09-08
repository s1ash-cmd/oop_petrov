#ifndef PETROV_ITEM_H
#define PETROV_ITEM_H

#include <string>
#include <vector>

using namespace std;

class item {
protected:
    string name = "";
    double weight = 0.0;
    double width = 0.0;
    double height = 0.0;
    int price = 0;
    bool stock = 0;

public:
friend istream& operator>>(istream& in, item& i);
friend ostream& operator<<(ostream& out, item& i);
friend ofstream& operator<<(ofstream& fout, item& i);
friend ifstream& operator>>(ifstream& fin, item& i);
};

#endif // PETROV_ITEM_H
