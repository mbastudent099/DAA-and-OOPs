#include<iostream>
using namespace std;

// forward declaration of class B
class B;

// class A
class A{
    int num;
public:
    void setNum(int n){
        num = n;
    }
    friend int findGreatest(A, B); // friend function declaration
};

// class B
class B{
    int num;
public:
    void setNum(int n){
        num = n;
    }
    friend int findGreatest(A, B); // friend function declaration
};

// friend function definition
int findGreatest(A objA, B objB){
    if(objA.num > objB.num){
        return objA.num;
    }
    else{
        return objB.num;
    }
}

int main(){
    A objA;
    B objB;

    // set values
    objA.setNum(10);
    objB.setNum(20);

    // call friend function
    int greatest = findGreatest(objA, objB);

    // display result
    cout<<"The greatest number is "<<greatest<<endl;

    return 0;
}
