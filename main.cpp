#include <iostream>
#include <vector>

using namespace std;

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

// Class to represent the garden and handle adding plants to it
class Garden {

    vector<SmallPlant> smallPlants;
    vector<MediumPlant> mediumPlants;
    vector<LargePlant> largePlants;

    public:
        void addSmallPlant(SmallPlant plant) {
            smallPlants.push_back(plant);
        }
        void addMediumPlant(MediumPlant plant) {
            mediumPlants.push_back(plant);
        }
        void addLargePlant(LargePlant plant) {
            largePlants.push_back(plant);
        }
        void printSmallPlants() {
            cout << "######### Small Plants #########" << endl;
            for(int i=0; i<smallPlants.size(); i++) {
                cout << i+1 << ". " << smallPlants[i].getName() << endl;
            }
        }
};

// Define menu functions to be used later
void displayMainMenu(Garden);
void displaySmallPlantMenu(Garden);

// Function to display the small plant menu
void displaySmallPlantMenu(Garden garden) {
    int choice;

    cout << "\n SMALL PLANT MENU";
    cout << "\n*******************************\n";
    cout << " 1 - Add a carrot\n";
    cout << " 2 - Add a radish\n";
    cout << " 3 - Add a pea\n";
    cout << " 4 - View small plants in the garden\n";
    cout << " 5 - Return to main menu\n";
    cout << "\n*******************************\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if(choice==1) {
        SmallPlant carrot("Carrot");
        garden.addSmallPlant(carrot);
        displaySmallPlantMenu(garden);
    }
    else if(choice==2) {
        SmallPlant radish("Radish");
        garden.addSmallPlant(radish);
        displaySmallPlantMenu(garden);
    }
    else if(choice==3) {
        SmallPlant pea("pea");
        garden.addSmallPlant(pea);
        displaySmallPlantMenu(garden);
    }
    else if(choice==4) {
        garden.printSmallPlants();
        displaySmallPlantMenu(garden);
    }
    else if(choice==5) {
        displayMainMenu(garden);
    }
            
}

// Function to display the main menu
void displayMainMenu(Garden garden) {
    int choice;
    cout << "\n MAIN MENU";
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
            displaySmallPlantMenu(garden);
            break;
        case 5:
            break;
    }
}

int main() 
{
    Garden garden;
    displayMainMenu(garden);
    return 0;
}


