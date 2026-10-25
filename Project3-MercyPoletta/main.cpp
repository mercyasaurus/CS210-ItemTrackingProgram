//Mercy Poletta
//17 October 2026

//Project 3 - Corner Grocer Produce Tracker
//main.cpp
//Purpose: Execute the program, display the menu, runs the function that's chosen

#include "ProduceItemTracking.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    //Immediately runs the constructor
    //loads "CS210_Project_Three_Input_File.txt" and creates "frequency.dat"
    ItemTracker tracker;

    char choice = 0;

    //Loop until the user types 4 to exit
    do {
        //Menu with each option
        cout << "\n======== Corner Grocer Produce Tracker ========" << endl;
        cout << "==================== MENU ====================" << endl;
        cout << "1. Search for an item's purchase frequency" << endl;
        cout << "2. Print all items and purchase frequencies" << endl;
        cout << "3. Print histogram of item purchase frequencies" << endl;
        cout << "4. Exit program" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice (1-4): ";

        cin >> choice;
        cin.ignore(1000, '\n'); //This is because I noticed that if you typed a wrong input for the menu, it would start repeating the menu/be stuck in an invalid input state.

        switch (choice) {
        case '1': { //Option 1, just asks for the item name then returns the item name with the purchase frequency.
            string searchItem;
            cout << "\nEnter the item name to search: ";
            cin >> searchItem;

            if (!searchItem.empty()) { //I added this if block to make sure that the capitalisation doesn't matter, so you can type apples instead of Apples.
                searchItem[0] = toupper(searchItem[0]);
                for (size_t i = 1; i < searchItem.size(); ++i) {
                    searchItem[i] = tolower(searchItem[i]);
                }
            }
            int count = tracker.getItemFrequency(searchItem);
            cout << endl << searchItem << " were purchased " << count << " time(s).\n";
            break;
        }
        case '2': //Option 2, just returns the list of all produce items that have been bought and their frequencies.
            cout << "\n--- All Produce Item Frequencies ---\n";
            tracker.printFrequencies();
            break;

        case '3': //Option 3, just prints the histogram (using asterisks) of all the items that have been bought and their frequencies
            cout << "\n--- Purchase Frequency Histogram ---\n";
            tracker.printHistogram();
            break;

        case '4': //Exits the program
            cout << "Exiting.\n";
            break;

        default: //Output for when you enter an invalid menu choice
            cout << "\nInvalid choice. Please select an option from 1 to 4.\n";
            break;
        }

    } while (choice != '4');

    return 0;
}


