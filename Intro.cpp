#include<iostream>
using namespace std;

class Hero {
public:
int health;

public:
char level;


void print(){
  cout<<level<<endl;
}

int getHealth(){
  return health;
}

char getLevel(){
  return level;
}

void setHealth(int h){
  health=h;
}

void setLevel(char ch){
  level=ch;
}

};

int main(){
  
// static allocation
  Hero a;
  a.setHealth(80);
  a.setLevel('A');
  cout<<"level is"<<a.level<<endl;
  cout<<"health is"<<a.getHealth()<<endl;
  
  // dynamically...........
  Hero *b=new Hero;
  b->setLevel('B');
  b->setHealth(70);
  cout<<"level is"<<(*b).level<<endl;
  cout<<"health is"<<(*b).getHealth()<<endl;


  cout<<"level is"<<b->level<<endl;
  cout<<"health is"<<b->getHealth()<<endl;

  // ..................
//   // creation of object
//   Hero ramesh;
  
// //   to use private fun use getter functiion like that:
//   cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
//   //ramesh.health=70;
  
  
// //   to use setter fun use setter function
//     ramesh.setHealth(70);
//   ramesh.level='A';
  
// // cout<<"ramesh health"<<ramesh.health<<endl;

// cout<<"ramesh health: "<<ramesh.getHealth()<<endl;
// cout<<"ramesh level: "<<ramesh.level<<endl;

return 0;
}

