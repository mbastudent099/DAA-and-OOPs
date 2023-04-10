#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    char name[50];
    char address[100];
    int age;
    float salary;
public:
    void setName(char *n) {
        strcpy(name, n);
    }
    void setAddress(char *a) {
        strcpy(address, a);
    }
    void setAge(int a) {
        age = a;
    }
    void setSalary(float s) {
        salary = s;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    char name[50], address[100];
    int age;
    float salary;
    cout << "Enter name: ";
    cin.getline(name, 50);
    emp.setName(name);
    cout << "Enter address: ";
    cin.getline(address, 100);
    emp.setAddress(address);
    cout << "Enter age: ";
    cin >> age;
    emp.setAge(age);
    cout << "Enter salary: ";
    cin >> salary;
    emp.setSalary(salary);
    emp.displayInfo();
    return 0;
}
