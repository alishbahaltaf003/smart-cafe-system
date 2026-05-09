#include "../include/Order.h"

void Order::addItem(MenuItem item, int qty) {
    items.push_back(item);
    quantity.push_back(qty);
}

void Order::removeItem(string itemName) {

    for(int i = 0; i < items.size(); i++) {

        if(items[i].getName() == itemName) {

            items.erase(items.begin() + i);
            quantity.erase(quantity.begin() + i);

            cout << "Item removed\n";
            return;
        }
    }

    cout << "Item not found\n";
}

double Order::calculateTotal() {

    if(items.empty()) {
        throw runtime_error("Order is empty!");
    }

    double total = 0;

    for(int i = 0; i < items.size(); i++) {
        total += items[i].getPrice() * quantity[i];
    }

    double tax = total * 0.05;

    return total + tax;
}

void Order::displayOrder() {

    cout << "------ Smart Cafe ------\n";

    for(int i = 0; i < items.size(); i++) {
        cout << items[i].getName()
             << " Qty: "
             << quantity[i]
             << endl;
    }
}