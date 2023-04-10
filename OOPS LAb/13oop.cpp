#include<iostream>
using namespace std;

class MyClass {
  int x;
public:
  void setX(int x) {
    this->x = x;
  }
  void printX() {
    cout << "x: " << this->x << endl;
  }
};

int main() {
  MyClass obj;
  obj.setX(5);
  obj.printX();
  return 0;
}
