#include<bits./stdc++.h>
using namespace std;

class math{
    public:
        double power(double m, int n=2){
            double result =1;
            for(int i=0;i<n;i++){
                result *= m;
            }
            return result;
        }
};

int main(){
    math op;
    double m;
    int n;

    cout<<"enter the number ";
    cin>>m;
    cout<<"enter the power";
    cin>>n;
    cout<<m<<"raised to power"<<n<<" is "<<op.power(m,n)<<endl;
    cout<<m<<"squere is "<<op.power(m);
    
    return 0;
}