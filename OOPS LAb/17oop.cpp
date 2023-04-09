#include <iostream>

using namespace std;

class Number {
private:
    int num1, num2;

public:
    Number(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend class Calculator;
};

class Calculator {
public:
    static void sum(Number n) {
        int result = n.num1 + n.num2;
        cout << "Number 1: " << n.num1 << endl;
        cout << "Number 2: " << n.num2 << endl;
        cout << "Sum: " << result << endl;
    }
};

int main() {
    Number n(10, 20);
    Calculator::sum(n);
    return 0;
}
