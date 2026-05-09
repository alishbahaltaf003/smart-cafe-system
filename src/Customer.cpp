#include "../include/Customer.h"

Customer::Customer(string n, int id)
: Person(n) {
    customerID = id;
}

void Customer::placeOrder(Order order) {
    orders.push_back(order);
    cout << "Order placed successfully\n";
}