#include <iostream>
#include <vector>
#include <cmath> // For M_PI and pow functions


using namespace std;

// Base class for shapes
class Shape
{
protected:
    double radius;
public:
    Shape(double r) : radius(r) {} // Constructor to initialize radius

    // Getter for radius
    double getRadius() const
    {
        return radius;
    }
};

// Derived class for Circle
class Circle : public Shape
 {
public:
    Circle(double r) : Shape(r) {} // Constructor to initialize Circle with radius


    double area() const {
        return M_PI * pow(radius, 2);
    }
};

// Function to manage a collection of circles
void manageCircles() {
    vector<Circle> circles; // Dynamic list to hold circles
    int numCircles;


    cout << "Enter the number of circles: ";
    cin >> numCircles;

    for (int i = 0; i < numCircles; ++i) {
        double radius;
        cout << "Enter the radius for circle " << i + 1 << ": ";
        cin >> radius;


        circles.push_back(Circle(radius));
    }

    // Display areas of all circles
    for (int i = 0; i < circles.size(); ++i) {
        cout << "Circle " << i + 1 << " with radius " << circles[i].getRadius()
             << " has an area of " << circles[i].area() << endl;
    }
}

int main() {
    // Manage circles with user input
    manageCircles();

    cout<<endl<<"24ce140_pallavi";

    return 0;
}
