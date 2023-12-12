#include<iostream>
using namespace std;

const double PI{3.1415926535897932384626433832795};

class cylinder {
private:
    double radius;
    double height;

public:
    // Constructor with default values
    cylinder() : radius(1), height(1) {}

    // Function to calculate and return the volume
    double calculateVolume() {
        return PI * radius * radius * height;
    }

    // Getter for radius
    double getBaseRadius() {
        return radius;
    }

    // Getter for height
    double getHeight() {
        return height;
    }

    // Setter for radius
    void setBaseRadius(double newRadius) {
        radius = newRadius;
    }

    // Setter for height
    void setHeight(double newHeight) {
        height = newHeight;
    }
};

int main() {
    // Creating a cylinder object with default values
    cylinder c1;

    // Displaying the volume of the cylinder
    cout << "Volume: " << c1.calculateVolume() << endl;

    // Getting and displaying base radius and height
    cout << "Base Radius: " << c1.getBaseRadius() << endl;
    cout << "Height: " << c1.getHeight() << endl;

    // Setting new values for base radius and height
    c1.setBaseRadius(2.5);
    c1.setHeight(5.0);

    // Displaying the updated volume of the cylinder
    cout << "Updated Base Radius: " << c1.getBaseRadius() << endl;
    cout << "Updated Height: " << c1.getHeight() << endl;
    cout << "Updated Volume: " << c1.calculateVolume() << endl;

    return 0;
}
