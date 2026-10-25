//ProduceItemTracking.h
//Defining the ItemTracker class

#ifndef PRODUCE_ITEM_TRACKING_H_
#define PRODUCE_ITEM_TRACKING_H_
#include <map> //Included as recommended to store the item names as keys and the frequency as their values
#include <string>

class ItemTracker {
private:
	std::map<std::string, int> m_itemFrequencies; //This is the map to tie the names of the items to their values
	void loadDataFromFile(const std::string& filename); //Loads the items from the input file
	void backupData(const std::string& filename) const; //Exporting the map to frequency.dat

public:
	ItemTracker(); //Consrtuctor to load the input file into the map and write the frequency.dat backup file
	int getItemFrequency(const std::string& item) const; //Option 1, this searches for the item name and returns the frequency, used a const specifier because it's read only.
	void printFrequencies() const; //Option 2, prints the item name and frequency, const because it doesn't modify the data
	void printHistogram(char symbol = '*') const; //Option 3, Prints all the items and a histogram, const because it doesn't modify data. 
};

#endif
