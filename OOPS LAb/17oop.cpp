#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;

public:
    Number() {
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
    }

    friend class Calculator;
};

class Calculator {
public:
    void calculateSum(Number n) {
        int sum = n.num1 + n.num2;
        cout << "Number 1: " << n.num1 << endl;
        cout << "Number 2: " << n.num2 << endl;
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    Number n;
    Calculator c;
    c.calculateSum(n);
    return 0;
}
