#include <iostream>
#include <cmath>

using namespace std;

class SHAPE {
protected:
    double height, width;
public:
    void getdata() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
    }
    virtual void display() {
        cout << "Area: " << height * width << endl;
    }
};

class TRIANGLE : public SHAPE {
public:
    void display() override {
        cout << "Area: " << 0.5 * height * width << endl;
    }
};

class RECTANGLE : public SHAPE {
public:
    void display() override {
        cout << "Area: " << height * width << endl;
    }
};

int main() {
    SHAPE* shape;
    int choice;

    cout << "Enter 1 for Triangle, 2 for Rectangle: ";
    cin >> choice;

    switch (choice) {
        case 1:
            shape = new TRIANGLE();
            break;
        case 2:
            shape = new RECTANGLE();
            break;
        default:
            cout << "Invalid choice" << endl;
            return 0;
    }

    shape->getdata();
    shape->display();

    delete shape;

    return 0;
}


