#include<bits./stdc++.h>
using namespace std;

class area{
    public:
        float atri(float base, float height){
            return 0.5*base*height;
        }
        float acir(float radius){
            return 3.14*radius*radius;
        }
        float arec(float len, float bre){
            return len*bre;
        }
};

int main(){
    area ar;
    float base,height,radius,len,bre;

    cout<<"enter the base and height :";
    cin>>base>>height;
    cout<<"area of triangle "<<ar.atri(base,height)<<endl;

    cout<<"enter the radius :";
    cin>>radius;
    cout<<"area of circle "<<ar.acir(radius)<<endl;

    cout<<"enter the length and bredth ";
    cin>>len>>bre;
    cout<<"area of the rectangle "<<ar.arec(len,bre)<<endl;

    return 0;

}