//ProduceItemTracking.cpp
//Purpose: Reads the input file, counts the items, writes it into frequency.dat, and handles option 2 and 3.

#include "ProduceItemTracking.h"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

//Constructor that runs automatically when created
ItemTracker::ItemTracker() {

	loadDataFromFile("CS210_Project_Three_Input_File.txt"); //Reads the input file
	backupData("frequency.dat"); //Saves the data to the backup file automatically

}

void ItemTracker::loadDataFromFile(const string& filename) {
	ifstream inputFile(filename); //opens the input file
	if (!inputFile.is_open()) { //Error just in case the file doesn't open
		cout << "Error: Could not open " << filename << endl;
		return;
	}

	string item; //reads each item
	while (inputFile >> item) { 
		m_itemFrequencies[item]++; //Finds the item and counts the frequency
	}

	inputFile.close();
}

void ItemTracker::backupData(const string& filename) const {
	ofstream outputFile(filename); //Creates/opens frequency.dat for writing the backup data
	if (!outputFile.is_open()) { //Error just in case the file doesn't open
		cout << "Error: Could not open " << filename << endl;
		return;
	}
	for (const auto& pair : m_itemFrequencies) { //Loops through the items and saves the ItemName and Count 
		outputFile << pair.first << " " << pair.second << endl;
	}
	outputFile.close();
}

//Option 1
int ItemTracker::getItemFrequency(const string& item) const {
	auto it = m_itemFrequencies.find(item); //Searches the map for the item, I used .find() to prevent the values from being changed.
	if (it != m_itemFrequencies.end()) { //If the item is found, it returns the frequency value
		return it->second;
	}
	return 0; //If it doesn't return an item, it just returns 0.
}
//Option 2
void ItemTracker::printFrequencies() const { //This block just prints each item and the frequency value
	for (const auto& pair : m_itemFrequencies) {
		cout << pair.first << " " << pair.second << endl;
	}
}
//Option 3
void ItemTracker::printHistogram(char symbol) const {
	for (const auto& pair : m_itemFrequencies) {
		cout << pair.first << " "; //Prints the item name first
		for (int i = 0; i < pair.second; ++i) { //Prints a * for each time the item was bought
			cout << symbol;
		}
		cout << endl;
	}
}


