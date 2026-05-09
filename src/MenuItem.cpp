#include "../include/MenuItem.h"

MenuItem::MenuItem(string n, double p, string c) {
    name = n;
    price = p;
    category = c;
}

string MenuItem::getName() {
    return name;
}

double MenuItem::getPrice() {
    return price;
}

void MenuItem::display() {
    cout << name << " - " << price << " - " << category << endl;
}