#include <iostream>
#include <vector>

using namespace std;

// Parent class that will be used for all the other plants
class Plant {

    string name;
    int length;

    public:
        void setName(string newName) {
            name = newName;
        }

        void setLength(int newLength) {
            length = newLength;
        }

        string getName() {
            return name;
        }

        int getLength() {
            return length;
        }

        int getArea() {
            return length*length;
        }
};

// Derived class that will be a parent class for all of the small plants
class SmallPlant: public Plant {
    public:
        SmallPlant() {
            setLength(1);
        }
};

class Carrot: public SmallPlant {
    public:
        Carrot() {
            setName("Carrot");
        }
};

int main() 
{
    Carrot carrot;
    cout << carrot.getLength() << " length" <<endl;
    cout << carrot.getName() << " name" <<endl;
    return 0;
}