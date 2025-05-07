#include <iostream>
#include <cmath>
using namespace std;
// Base class
class Shape {
public:
	virtual float Area() = 0; // Pure virtual function
// Virtual destructor
	virtual ~Shape() {}
};
// Derived class: Rectangle
class Rectangle : public Shape {
	float length, width;
public:
	Rectangle(float l, float w) : length(l), width(w) {}
	float Area() override {
		return length * width;
	}
};
// Derived class: Circle
class Circle : public Shape {
	float radius;
public:
	Circle(float r) : radius(r) {}
	float Area() override {
		return 3.1416f * radius * radius;
	}
};
int main() {
	Shape* shapes[2];
	shapes[0] = new Rectangle(5, 3);
	shapes[1] = new Circle(2);
	cout << "Areas of shapes:\n";
	for (int i = 0; i < 2; i++) {
		cout << "Shape " << i + 1 << ": " << shapes[i]->Area() << endl;
	}
	for (int i = 0; i < 2; i++) {
		delete shapes[i];
	}
	cout<<"24CE140_PALLAVI";
	return 0;
}
