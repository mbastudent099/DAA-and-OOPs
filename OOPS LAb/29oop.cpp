#include<iostream>

using namespace std;

class shape{
    protected:
        float len;
        float width;
    public:
        void getdata(){
            cout<<"leng and wid is:"<<endl;
            cin>>len>>width;
        }
        void display(){
            cout<<len*width<<endl;

        }

}; 
class TRI : public shape{
    public:
        void getdata(){
            cout<<"hei and base"<<endl;
            cin>>len>>width;
        }
        void display(){
            cout<< 0.5*len*width<<endl;
        }
};
class REC : public shape{
    public:
        void getdata(){
            cout<<"hei and base"<<endl;
            cin>>len>>width;
        }
        void display(){
            cout<<len*width<<endl;
        }
};

int main(){
    char ty;
    shape* s;
    

    cout<<"enter t or r"<<endl;
    cin>>ty;

    if(ty == 't'){
        
        s = new TRI;
    }
    else if(ty == 'r'){
        
        s = new REC;
    }
    else{
        cout<<"invalid";
    }

    s->getdata();
    s->display();
    
    return 0;

}