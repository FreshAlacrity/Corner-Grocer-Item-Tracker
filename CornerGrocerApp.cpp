/*
 * Corner Grocer Item Tracking App
 * Date: 2/16/2023
 * Class: CS-210-T3259 Programming Languages 23EW3
 */

#include "Menu.h"

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <map>
using namespace std;


// Initialize the main menu
Menu mainMenu;

// Code execution begins and loops here
int main() {
    // #todo consider putting these in the menu class
    try {
        // Display the menu to the user and allow selecting from menu options until the user selects the Quit option
        while (true) {
            mainMenu.Print();
            mainMenu.InputHotkey();
        }
    }
    catch (runtime_error excptObj) {
        cout << excptObj.what() << endl;
    }
    return 0;
}