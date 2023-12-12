#include<iostream>
using namespace std;

const double PI{3.1415926535897932384626433832795};

class cylinder {
private:
    double radius{1};
    double height{1};
public:
    // Constructor with default values
    cylinder() = default;

    // Constructor with parameters
    cylinder(double radius1, double height1) {
        radius = radius1;
        height = height1;
    }

    // Function to calculate and return the volume
    double calculateVolume() {
        return radius * radius * height * PI;
    }
};

int main() {
    // Creating a cylinder object with default values
    cylinder c1;

    // Displaying the volume of the cylinder
    cout << "Volume: " << c1.calculateVolume() << endl;

    return 0;
}
