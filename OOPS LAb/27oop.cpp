#include <iostream>
#include <string>

using namespace std;

class STUDENT {
protected:
    int rollno;
    string name;
public:
    STUDENT(int rn, string n) : rollno(rn), name(n) {}
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

class EXAM : public STUDENT {
protected:
    int marks[6];
public:
    EXAM(int rn, string n, int m1, int m2, int m3, int m4, int m5, int m6)
    : STUDENT(rn, n), marks{m1, m2, m3, m4, m5, m6} {}
    void display() {
        STUDENT::display();
        cout << "Marks in 6 Subjects: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class RESULT : public EXAM {
private:
    int total_marks;
public:
    RESULT(int rn, string n, int m1, int m2, int m3, int m4, int m5, int m6)
    : EXAM(rn, n, m1, m2, m3, m4, m5, m6) {
        total_marks = m1 + m2 + m3 + m4 + m5 + m6;
    }
    void display() {
        EXAM::display();
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    int rollno, m1, m2, m3, m4, m5, m6;
    string name;

    cout << "Enter Roll No: ";
    cin >> rollno;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Marks in 6 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6;

    RESULT result(rollno, name, m1, m2, m3, m4, m5, m6);
    result.display();

    return 0;
}
