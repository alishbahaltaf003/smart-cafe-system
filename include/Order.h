#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include<vector>
#include "MenuItem.h"

using namespace std;

class Order {

private:
    vector<MenuItem> items;
    vector<int> quantity;

public:
    void addItem(MenuItem item, int qty);

    void removeItem(string itemName);

    double calculateTotal();

    void displayOrder();
};

#endif