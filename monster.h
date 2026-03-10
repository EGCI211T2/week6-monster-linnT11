#ifndef monster_h
#define monster_h

#include <iostream>
#include <string>
using namespace std;

class monster{
private:
    string name;
    int hp,potion;

public:
    monster(string n="monster", int h=100,int p=1){
        name=n;
        hp=h;
        potion=p;
    }

    void Attack(monster &m){
        m.hp -= 10;
        if(m.hp < 0)
            m.hp = 0;
    }

    void heal(){
        if(potion > 0){
            hp += 20;
            potion--;
        }
    }

    void display(){
        if(hp>0)
            cout<<name<<" HP: "<<hp<<endl;
    }

    void setHP(int h){
        hp = h;
    }

    int getHP(){
        return hp;
    }
};

#endif