#include <iostream>
#include <string>

using namespace std;

class First {
protected:
    int bookNo;
    string bookName;
public:
    void getData() {
        cout << "Enter Book No: ";
        cin >> bookNo;
        cout << "Enter Book Name: ";
        cin >> bookName;
    }
    void putData() {
        cout << "Book No: " << bookNo << endl;
        cout << "Book Name: " << bookName << endl;
    }
};

class Second {
protected:
    string authorName;
    string publisher;
public:
    void getData() {
        cout << "Enter Author Name: ";
        cin >> authorName;
        cout << "Enter Publisher: ";
        cin >> publisher;
    }
    void putData() {
        cout << "Author Name: " << authorName << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class Third : public First, public Second {
private:
    int numOfPages;
    int yearOfPublication;
public:
    void getData() {
        First::getData();
        Second::getData();
        cout << "Enter Number of Pages: ";
        cin >> numOfPages;
        cout << "Enter Year of Publication: ";
        cin >> yearOfPublication;
    }
    void putData() {
        First::putData();
        Second::putData();
        cout << "Number of Pages: " << numOfPages << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
    }
};

int main() {
    int n;
    cout << "Enter Number of Books: ";
    cin >> n;

    Third books[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Details for Book " << i + 1 << ":" << endl;
        books[i].getData();
    }

    cout << endl << "Details of All Books: " << endl << endl;

    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].putData();
        cout << endl;
    }

    return 0;
}
