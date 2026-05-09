#ifndef MENUITEM_H
#define MENUITEM_H

#include<iostream>
using namespace std;

class MenuItem {

private:
    string name;
    double price;
    string category;

public:
    MenuItem(string n, double p, string c);

    string getName();
    double getPrice();

    void display();
};

#endif