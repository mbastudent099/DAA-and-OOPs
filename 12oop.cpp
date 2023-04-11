#include <iostream>

class Counter {
public:
    Counter() {
        count++;
    }

    ~Counter() {
        count--;
    }

    static int getCount() {
        return count;
    }

private:
    static int count;
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    std::cout << "Number of active objects: " << Counter::getCount() << std::endl;

    {
        Counter c3;
        std::cout << "Number of active objects: " << Counter::getCount() << std::endl;
    }

    std::cout << "Number of active objects: " << Counter::getCount() << std::endl;

    return 0;
}
