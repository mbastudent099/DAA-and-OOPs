#include<iostream>
#include<string>

using namespace std;

class Student {
    private:
        string name;
        string branch;
        int roll_no;
        int age;
        char sex;
        int marks[5];

    public:
        void set_data() {
            cout << "Enter name: ";
            cin >> name;

            cout << "Enter branch: ";
            cin >> branch;

            cout << "Enter roll no: ";
            cin >> roll_no;

            cout << "Enter age: ";
            cin >> age;

            cout << "Enter sex (M/F): ";
            cin >> sex;

            cout << "Enter marks in 5 subjects: ";
            for (int i = 0; i < 5; i++) {
                cin >> marks[i];
            }
        }

        void display_data() {
            cout << "Name: " << name << endl;
            cout << "Branch: " << branch << endl;
            cout << "Roll no: " << roll_no << endl;
            cout << "Age: " << age << endl;
            cout << "Sex: " << sex << endl;
            cout << "Marks in 5 subjects: ";
            for (int i = 0; i < 5; i++) {
                cout << marks[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Student student;
    Student *ptr;

    ptr = &student;

    ptr->set_data();

    cout << "Details of student using indirection operator:" << endl;
    cout << "-------------------------------------------" << endl;
    student.display_data();

    cout << "Details of student using pointer to object members:" << endl;
    cout << "-----------------------------------------------" << endl;
    ptr->display_data();

    return 0;
}
