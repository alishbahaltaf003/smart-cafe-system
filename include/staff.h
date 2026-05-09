#ifndef STAFF_H
#define STAFF_H

#include<iostream>
#include "Person.h"

using namespace std;

class Staff : public Person {

public:
    Staff(string n);

    void manageMenu();
};

#endif