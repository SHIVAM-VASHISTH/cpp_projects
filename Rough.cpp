#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {}
    Item(string n, float p, int q);
    friend ifstream &operator>>(ifstream &fis, Item &i);
    friend ofstream &operator<<(ofstream &fos, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};

Item::Item(string n, float p, int q) {
    name = n;
    price = p;
    qty = q;
}

ofstream & operator<<(ofstream &fos, Item &i) {
    fos << i.name << endl << i.price << endl << i.qty << endl;
    return fos;
}

ifstream & operator>>(ifstream &fis, Item &i) {
    fis >> i.name >> i.price >> i.qty;
    return fis;
}

ostream & operator<<(ostream &os, Item &i) {
    os << i.name << endl << i.price << endl << i.qty << endl;
    return os;
}

int main()
{
    Item *item = new Item("Paste", 5, 10);

    cout << *item << endl;

    return 0;
}