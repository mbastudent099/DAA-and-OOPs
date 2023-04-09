#include<iostream>
using namespace std;

class Factorial{
    int num;
public:
    Factorial(){
        num = 0;
    }

    Factorial(int n){ // parameterized constructor
        num = n;
    }

    int calculateFactorial(){
        int fact = 1;
        for(int i=1; i<=num; i++){
            fact *= i;
        }
        return fact;
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    Factorial f(n); // create object and pass input to constructor
    int fact = f.calculateFactorial(); // calculate factorial

    cout<<"Factorial of "<<n<<" is "<<fact<<endl;

    return 0;
}
