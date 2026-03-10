#ifndef thanos_h
#define thanos_h

#include "monster.h"

class Thanos {
private:
    int stones;
    int hp;

public:

    Thanos(int s=0,int h=1000){
        stones=s;
        hp=h;
    }

    ~Thanos(){}

    void operator++(){
        stones++;
        cout<<"Stone collected: "<<stones<<endl;
    }

    void snap_finger(monster m[],int n){

        cout<<"Thanos snaps fingers"<<endl;

        if(stones==6){

            cout<<"Half of monsters disappear!"<<endl;

            for(int i=0;i<n/2;i++){
                m[i].setHP(0);
            }
        }
    }

};

#endif