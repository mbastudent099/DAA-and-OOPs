#include<iostream>
#include<cstring>
using namespace std;

class String {
    char* str;
    int length;
public:
    String() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }
    
    String(char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    
    String(const String& s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }
    
    ~String() {
        delete[] str;
    }
    
    String operator+(String s) {
        String temp;
        temp.length = length + s.length;
        temp.str = new char[temp.length + 1];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    
    String operator=(String s) {
        length = s.length;
        delete[] str;
        str = new char[length + 1];
        strcpy(str, s.str);
        return *this;
    }
    
    bool operator<=(String s) {
        if (strcmp(str, s.str) <= 0)
            return true;
        else
            return false;
    }
    
    int getLength() {
        return length;
    }
    
    void toLower() {
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }
    
    void toUpper() {
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }
    
    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3;
    
    s3 = s1 + s2;
    s3.display(); // Output: HelloWorld
    
    if (s1 <= s2)
        cout << "s1 is less than or equal to s2" << endl;
    else
        cout << "s1 is greater than s2" << endl;
    
    cout << "Length of s1: " << s1.getLength() << endl; // Output: 5
    
    s1.toLower();
    s1.display(); // Output: hello
    
    s2.toUpper();
    s2.display(); // Output: WORLD
    
    return 0;
}
