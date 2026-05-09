#include<iostream>
#include "../include/MenuItem.h"
#include "../include/Order.h"
#include "../include/Customer.h"
#include "../include/Staff.h"

using namespace std;

int main() {

    try {

        // Staff
        Staff s1("Ahmed");
        s1.manageMenu();

        // Menu Items
        MenuItem item1("Coffee", 5, "Drinks");
        MenuItem item2("Burger", 10, "Fast Food");

        // Order create
        Order order;

        order.addItem(item1, 2);
        order.addItem(item2, 1);

        order.displayOrder();

        cout << "Total Bill: " << order.calculateTotal() << endl;

        // Customer
        Customer c1("Ali", 101);
        c1.placeOrder(order);
    }

    catch(exception &e) {
        cout << e.what();
    }

    return 0;
}