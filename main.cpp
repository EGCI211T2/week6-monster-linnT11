#include <iostream>
using namespace std;

#include "thanos.h"

int main(){

  Thanos T;

  int n;
  cout<<"How many monsters? ";
  cin>>n;

  monster *m = new monster[n];

  // give monsters name, hp, potion
  for(int i=0;i<n;i++){
      string name;
      int hp,potion;

      cout<<"Monster "<<i+1<<" name: ";
      cin>>name;

      cout<<"HP: ";
      cin>>hp;

      cout<<"Potions: ";
      cin>>potion;

      m[i] = monster(name,hp,potion);
  }

  ++T;
  ++T;
  T.snap_finger(m,n);

  ++T;
  ++T;
  T.snap_finger(m,n);

  ++T;
  ++T;
  T.snap_finger(m,n);

  cout<<"\nRemaining monsters:\n";

  for(int i=0;i<n;i++)
      m[i].display();

  delete [] m;

}