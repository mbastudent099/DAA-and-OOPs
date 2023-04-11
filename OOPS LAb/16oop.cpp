#include<iostream>
using namespace std;


class B;


class A{
    int num;
public:
    void setNum(int n){
        num = n;
    }
    friend int findGreatest(A, B); 
};


class B{
    int num;
public:
    void setNum(int n){
        num = n;
    }
    friend int findGreatest(A, B); 
};


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

    
    objA.setNum(10);
    objB.setNum(20);

    
    int greatest = findGreatest(objA, objB);

    
    cout<<"The greatest number is "<<greatest<<endl;

    return 0;
}
