#include <iostream>

using namespace std;
const int ROWS = 3;

const int COLS = 5;

enum class Slabs
 {
    SLAB1,
    SLAB2,
    SLAB3
};



void displayMenu(int studentID);
void costSlab1(int data[][COLS]);
void costSlab2(int data[][COLS]);
void costSlab3(int data[][COLS]);

int main() 
{
    int studentID = 12345; 
    int electricityData[ROWS][COLS] = 
    {
        {90, 150, 250, 80, 120},  
        {110, 180, 180, 60, 90},  
        {220, 270, 320, 150, 200}
    };

    displayMenu(studentID);

    return 0;
}

// Function to display the menu
void displayMenu(int studentID) 
{
    cout << "Student ID: " << studentID << endl;
    cout << "1. Display the bill of Slab 1 and Slab 2" << endl;
    cout << "2. Display the bill of Slab 3" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    int electricityData[ROWS][COLS] = 
    {
        {90, 150, 250, 80, 120},  // Slab 1  data
        {110, 180, 180, 60, 90},  // Slab  2  d ta
        {220, 270, 320, 150, 200} // Slab 3  data
    };

    switch (choice) {
        case 1:
            costSlab1(electricityData);
            costSlab2(electricityData);
            break;
        case 2:
            costSlab3(electricityData);
            break;
        default:
            cout << "Exiting............" << endl;
            return;
    }

    displayMenu(studentID); 
}


void costSlab1(int data[][COLS]) 

{
    int totalCost = 0;
    const int unitCost = 10;
    
    for (int i = 0; i < COLS; ++i) {
        totalCost += data[static_cast<int>(Slabs::SLAB1)][i] * unitCost;
    }

    cout << "Total cost for Slab 1: Rs. " << totalCost << endl;
}


void costSlab2(int data[][COLS]) 
{
    int totalCost = 0;
    const int unitCost = 15;
    
    for (int i = 0; i < COLS; ++i) {
        totalCost += data[static_cast<int>(Slabs::SLAB2)][i] * unitCost;
    }

    cout << "Total cost for Slab 2: Rs. " << totalCost << endl;
}


void costSlab3(int data[][COLS])
 {
    int totalCost = 0;
    const int unitCost = 20;
    
    for (int i = 0; i < COLS; ++i)
     {
        totalCost += data[static_cast<int>(Slabs::SLAB3)][i] * unitCost;
    }

    cout << "Total cost for Slab 3: Rs. " << totalCost << endl;
}
