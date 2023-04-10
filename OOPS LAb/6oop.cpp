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

        string get_name() {
            return name;
        }

        float get_percentage() {
            int total_marks = 0;
            for (int i = 0; i < 5; i++) {
                total_marks += marks[i];
            }

            float percentage = (float)total_marks / 5;
            return percentage;
        }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        students[i].set_data();
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        float percentage = students[i].get_percentage();
        if (percentage > 70) {
            count++;
            cout << students[i].get_name() << " scored " << percentage << "%" << endl;
        }
    }

    if (count == 0) {
        cout << "No students scored more than 70% marks." << endl;
    } else {
        cout << count << " student(s) scored more than 70% marks." << endl;
    }

    return 0;
}
