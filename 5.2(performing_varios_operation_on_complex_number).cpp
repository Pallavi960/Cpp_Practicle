#include <iostream>
using namespace std;
class Complex {
	float real, imag;
public:
	Complex(float r = 0, float i = 0) : real(r), imag(i) {}
	Complex operator+(const Complex& c) {
		return Complex(real + c.real, imag + c.imag);
	}
	Complex operator-(const Complex& c) {
		return Complex(real - c.real, imag - c.imag);
	}
	
	friend istream& operator>>(istream& in, Complex& c) {
		cout << "Enter real: ";
		in >> c.real;
		cout << "Enter imaginary: ";
		in >> c.imag;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Complex& c) {
		out << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
		return out;
	}
};
int main() {
	Complex c1, c2;
	//get input
	cout << "Input first complex number:\n";
	cin >> c1;
	cout << "\nInput second complex number:\n";
	cin >> c2;
	Complex sum = c1 + c2;
	Complex diff = c1 - c2;
	
	//print output
	cout << "\nSum: " << sum << endl;
	cout << "Difference: " << diff << endl;
    cout<<"24CE140";
	return 0;
}
