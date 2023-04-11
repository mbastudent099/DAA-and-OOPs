#include<iostream>

using namespace std;

class MyClass {
    int x;
public:
    MyClass(int n) : x(n) {}
    friend void set_x(MyClass& obj, int n) {
        obj.x = n;
    }
    friend void print_x(const MyClass& obj) {
        cout << "x = " << obj.x << endl;
    }
};

int main() {
    MyClass obj(10);
    print_x(obj); 
    set_x(obj, 20);
    print_x(obj); 
    return 0;
}
