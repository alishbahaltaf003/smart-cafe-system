#include "../include/Person.h"

Person::Person(string n) {
    name = n;
}

void Person::displayName() {
    cout << "Name: " << name << endl;
}