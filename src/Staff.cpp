#include "../include/Staff.h"

Staff::Staff(string n)
: Person(n) {
}

void Staff::manageMenu() {
    cout << "Menu managed by staff\n";
}