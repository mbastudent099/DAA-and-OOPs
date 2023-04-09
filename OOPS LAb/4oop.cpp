#include<bits./stdc++.h>
using namespace std;

class time{
    private:
        int hours,mins,secs;
    public:
        time(int h, int m, int s){
            hours =h;
            mins = m;
            secs = s;
        }

        time add(time t){
            int h = hours + t.hours;
            int m = mins + t.mins;
            int s = secs + t.secs;

            if(s >= 60){
                m += s/60;
                s%= 60;
            }


        }

}