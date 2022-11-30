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
        void printMediumPlants() {
            cout << "######### Medium Plants #########" << endl;
            for(int i=0; i<mediumPlants.size(); i++) {
                cout << i+1 << ". " << smallPlants[i].getName() << endl;
            }
        }
        void printLargePlants() {
            cout << "######### Large Plants #########" << endl;
            for(int i=0; i<largePlants.size(); i++) {
                cout << i+1 << ". " << smallPlants[i].getName() << endl;
            }
        }
        void printAllPlants() {
            printSmallPlants();
            printMediumPlants();
            printLargePlants();
        }
};

// Define menu functions to be used later
void displayMainMenu(Garden);
void displaySmallPlantMenu(Garden);
void displayMediumPlantMenu(Garden);
void displayLargePlantMenu(Garden);

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
        SmallPlant pea("Pea");
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

// Function to display the medium plant menu
void displayMediumPlantMenu(Garden garden) {
    int choice;

    cout << "\n MEDIUM PLANT MENU";
    cout << "\n*******************************\n";
    cout << " 1 - Add a Cabbage\n";
    cout << " 2 - Add a Corn\n";
    cout << " 3 - Add a Tomato\n";
    cout << " 4 - View medium plants in the garden\n";
    cout << " 5 - Return to main menu\n";
    cout << "\n*******************************\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if(choice==1) {
        MediumPlant cabbage("Cabbage");
        garden.addMediumPlant(cabbage);
        displayMediumPlantMenu(garden);
    }
    else if(choice==2) {
        MediumPlant corn("Corn");
        garden.addMediumPlant(corn);
        displayMediumPlantMenu(garden);
    }
    else if(choice==3) {
        MediumPlant tomato("Tomato");
        garden.addMediumPlant(tomato);
        displayMediumPlantMenu(garden);
    }
    else if(choice==4) {
        garden.printMediumPlants();
        displayMediumPlantMenu(garden);
    }
    else if(choice==5) {
        displayMainMenu(garden);
    }          
}

// Function to display the large plant menu
void displayLargePlantMenu(Garden garden) {
    int choice;

    cout << "\n LARGE PLANT MENU";
    cout << "\n*******************************\n";
    cout << " 1 - Add a Watermelon\n";
    cout << " 2 - Add a Zucchini\n";
    cout << " 3 - Add a Squash\n";
    cout << " 4 - View large plants in the garden\n";
    cout << " 5 - Return to main menu\n";
    cout << "\n*******************************\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if(choice==1) {
        LargePlant watermelon("Watermelon");
        garden.addLargePlant(watermelon);
        displayLargePlantMenu(garden);
    }
    else if(choice==2) {
        LargePlant zucchini("Zucchini");
        garden.addLargePlant(zucchini);
        displayLargePlantMenu(garden);
    }
    else if(choice==3) {
        LargePlant squash("Squash");
        garden.addLargePlant(squash);
        displayLargePlantMenu(garden);
    }
    else if(choice==4) {
        garden.printLargePlants();
        displayLargePlantMenu(garden);
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
        case 2:
            displayMediumPlantMenu(garden);
            break;
        case 3:
            displayLargePlantMenu(garden);
            break;
        case 4:
            garden.printAllPlants();
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


