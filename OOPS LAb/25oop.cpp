#include <iostream>
#include <string>

using namespace std;

class BasicInfo {
protected:
    string name;
    int rollNo;
    char sex;
public:
    void getData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Sex (M/F): ";
        cin >> sex;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Sex: " << sex << endl;
    }
};

class PhysicalFit : public BasicInfo {
private:
    float height;
    float weight;
public:
    void getData() {
        BasicInfo::getData();
        cout << "Enter Height (in cm): ";
        cin >> height;
        cout << "Enter Weight (in kg): ";
        cin >> weight;
    }
    void display() {
        BasicInfo::display();
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    PhysicalFit student;

    cout << "Enter Student Details:" << endl;
    student.getData();

    cout << endl << "Student Information:" << endl << endl;

    student.display();

    return 0;
}
