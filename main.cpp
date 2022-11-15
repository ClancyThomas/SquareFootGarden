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

// Derived class that will be a parent class for all of the small plants
class SmallPlant: public Plant {
    public:
        SmallPlant(string name) {
            setLength(1);
            setWidth(1);
            setName(name);
        }
};

// Derived class that will be a parent class for all of the medium plants
class MediumPlant: public Plant {
    public:
        MediumPlant(string name) {
            setLength(2);
            setWidth(1);
            setName(name);
        }
};

// Derived class that will be a parent class for all of the large plants
class LargePlant: public Plant {
    public:
        LargePlant(string name) {
            setLength(2);
            setWidth(2);
            setName(name);
        }
};



int main() 
{
    Broccoli broccoli;
    cout << carrot.getLength() << " length" <<endl;
    cout << carrot.getName() << " name" <<endl;
    return 0;
}