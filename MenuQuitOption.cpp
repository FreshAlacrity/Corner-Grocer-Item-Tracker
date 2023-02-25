#include "MenuQuitOption.h"

#include <iostream>
using namespace std;


MenuQuitOption::MenuQuitOption()
    : MenuItem("Quit") {}

MenuQuitOption::MenuQuitOption(int t_menuPosition, map<string, unsigned int>* t_inventoryMap)
    : MenuItem("Quit", t_menuPosition, t_inventoryMap) {}

void MenuQuitOption::Select() {
    cout << "Have a nice day." << endl;
    exit(0);
}