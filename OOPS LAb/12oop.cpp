#include<iostream>
using namespace std;
class fibonacci
{
public:
int n;
fibonacci(int num)
{
int a=0,b=1,t,j;
cout<<"enter the number :";
cin>>num;
n=num;
cout<<"the fibonacci series is :"<<a<<b;
for(j=1;j<=n;j++)
{
t=a+b;
cout<<t;
a=b;
b=t;
}
cout<<"\n";
}
fibonacci(fibonacci  &obj)
{
int a=0,b=1,t,j;
n=obj.n;
cout<<"the fibonacci series is :"<<a<<b;
for(j=1;j<=n;j++)
{
t=a+b;
cout<<t;
a=b;
b=t;
}
cout<<"\n";
}
};
int main()
{
int num;
fibonacci obj(num);
fibonacci obj1(obj);  //copy constructor takes an object as an argument.
}