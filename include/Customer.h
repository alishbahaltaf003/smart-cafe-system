#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<vector>
#include "Person.h"
#include "Order.h"

using namespace std;

class Customer : public Person {

private:
    int customerID;
    vector<Order> orders;

public:
    Customer(string n, int id);

    void placeOrder(Order order);
};

#endif