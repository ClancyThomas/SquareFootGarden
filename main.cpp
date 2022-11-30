#include <iostream>
#include <vector>

using namespace std;

void displayMainMenu();
void displaySmallPlantMenu();

// Parent class that will be used for all the other plants
class Plant {

    string name;
    int length;
    int width;

    public:
        void setName(string newName) {
            name = newName;
        }

        void setLength(int newLength) {
            length = newLength;
        }

        void setWidth(int newLength) {
            length = newLength;
        }

        string getName() {
            return name;
        }

        int getLength() {
            return length;
        }

        int getArea() {
            return length*width;
        }
};

// Derived class that will be a class for all of the small plants
class SmallPlant: public Plant {
    public:
        SmallPlant(string name) {
            setLength(1);
            setWidth(1);
            setName(name);
        }
};

// Derived class that will be a class for all of the medium plants
class MediumPlant: public Plant {
    public:
        MediumPlant(string name) {
            setLength(2);
            setWidth(1);
            setName(name);
        }
};

// Derived class that will be a class for all of the large plants
class LargePlant: public Plant {
    public:
        LargePlant(string name) {
            setLength(2);
            setWidth(2);
            setName(name);
        }
};

// Function to display the main menu
void displaySmallPlantMenu() {
    int choice;

    cout << "\n*******************************\n";
    cout << " 1 - Add a carrot\n";
    cout << " 2 - Add a radish\n";
    cout << " 3 - Add a pea\n";
    cout << " 4 - View plants in the garden\n";
    cout << " 5 - Return to main menu\n";
    cout << "\n*******************************\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    switch(choice) {
        case 5:
            displayMainMenu();
            break;
    }
}

// Function to display the main menu
void displayMainMenu() {
    int choice;

    cout << "\n*******************************\n";
    cout << " 1 - Add a small plant\n";
    cout << " 2 - Add a medium plant\n";
    cout << " 3 - Add a large plant\n";
    cout << " 4 - View plants in the garden\n";
    cout << " 5 - Exit the program\n";
    cout << "\n*******************************\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    switch(choice) {
        case 1:
            displaySmallPlantMenu();
            break;
        case 5:
            break;
    }
}

int main() 
{
    displayMainMenu();
    return 0;
}


