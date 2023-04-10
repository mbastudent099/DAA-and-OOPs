#include <iostream>

using namespace std;

class Complex {
    private:
        float real;
        float imag;

    public:
        // Default constructor
        Complex() {
            real = 0;
            imag = 0;
        }

        // Constructor with one argument (to initialize real and imag to equal values)
        Complex(float num) {
            real = num;
            imag = num;
        }

        // Constructor with two arguments (to initialize real and imag to different values)
        Complex(float r, float i) {
            real = r;
            imag = i;
        }

        // Function to display complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }

        // Function to add two complex numbers
        Complex add(Complex c) {
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};

int main() {
    float real1, imag1, real2, imag2;

    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    Complex c1(real1, imag1);   // Create complex number with real and imaginary parts entered by user
    Complex c2(real2, imag2);   // Create complex number with real and imaginary parts entered by user
    Complex c3;                 // Create uninitialized complex number

    c3 = c1.add(c2);   // Add c1 and c2 and store result in c3

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    cout << "c3 = ";
    c3.display();

    return 0;
}
