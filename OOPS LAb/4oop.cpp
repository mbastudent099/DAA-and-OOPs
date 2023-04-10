#include<iostream>

using namespace std;

class TIME {
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        TIME() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        TIME(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }

        void set_time() {
            cout << "Enter hours: ";
            cin >> hours;
            cout << "Enter minutes: ";
            cin >> minutes;
            cout << "Enter seconds: ";
            cin >> seconds;
        }

        TIME add(TIME t) {
            int h = hours + t.hours;
            int m = minutes + t.minutes;
            int s = seconds + t.seconds;

            if (s >= 60) {
                m += s / 60;
                s = s % 60;
            }

            if (m >= 60) {
                h += m / 60;
                m = m % 60;
            }

            return TIME(h, m, s);
        }

        void display() {
            cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
        }
};

int main() {
    TIME t1, t2;

    cout << "Enter time for t1:" << endl;
    t1.set_time();

    cout << "Enter time for t2:" << endl;
    t2.set_time();

    TIME sum = t1.add(t2);

    cout << "t1: ";
    t1.display();

    cout << "t2: ";
    t2.display();

    cout << "sum: ";
    sum.display();

    return 0;
}
