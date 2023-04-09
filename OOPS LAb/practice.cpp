#include<iostream>
 using namespace std;

class test{
    private:
        int x,y,z;
    public:
        void input(){
            cout<<"numbers";
            cin>> x>> y>> z;
        }
    friend void find(test t);
    
};

void find(test t) {
   if (t.x > t.y && t.x > t.z) {
       cout << "Largest is:" << t.x;
   } else if (t.y > t.z) {
       cout << "Largest is:" << t.y;
   } else {
       cout << "Largest is:" << t.z;
   }
}

int main() {
   test t;
   t.input();

   find(t);
   return 0;
}