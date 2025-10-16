#include <iostream>
#include <string>
using namespace std;

// Define a class
class Car {
public:
    // Data members
    string brand;
    string model;
    int year;

    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Member function
    void displayinfo() {
        cout << "Brand: " << brand 
             << ", Model: " << model 
             << ", Year: " << year << endl;
    }
};

int main() {
    // Create objects of class using constructor
    Car car1("BMW", "M4 COMPETITION", 2024);
    Car car2("CR", "Bhavishya final boss", 2007);

    // Call member function to display info
    car1.displayinfo();
    car2.displayinfo();

    return 0;
}