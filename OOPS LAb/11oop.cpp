#include<iostream>
using namespace std;

class Fibonacci{
    int num1, num2, n;
public:
    Fibonacci(){
        num1 = 0;
        num2 = 1;
        n = 10;
    }

    Fibonacci(Fibonacci &f){ // copy constructor
        num1 = f.num1;
        num2 = f.num2;
        n = f.n;
    }

    void generateSeries(){
        int nextTerm;
        cout<<"Fibonacci Series: "<<num1<<" "<<num2<<" ";
        for(int i=2; i<n; i++){
            nextTerm = num1 + num2;
            cout<<nextTerm<<" ";
            num1 = num2;
            num2 = nextTerm;
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of terms to generate in Fibonacci series: ";
    cin>>n;

    Fibonacci f1; // create object and initialize values
    f1.generateSeries(); // generate fibonacci series

    Fibonacci f2 = f1; // create new object using copy constructor
    f2.generateSeries(); // generate fibonacci series using new object

    return 0;
}
