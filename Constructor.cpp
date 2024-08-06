#include<iostream>
using namespace std;

class Hero {
public:
int health;

public:
char level;

Hero(){
    cout<<"constructor called"<<endl;
}


// parameterized constructor.......
Hero(int health){
    cout<<"this->"<<this<<endl;
    this->health=health;
}


Hero(int health, char level){
    this->level=level;
    this->health=health;
}

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



    // object create statically...
    cout<<"hi.."<<endl;
    // default..
    //Hero ramesh;
    cout<<"hello"<<endl;

    // paramertrized cons.........
    Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh<<endl;
    ramesh.getHealth();
    ramesh.print();


    // dynamically........
    Hero *h=new Hero(11);
    h->print();


    Hero temp(22,'B');
    temp.print();

// // static allocation
//   Hero a;
//   a.setHealth(80);
//   a.setLevel('A');
//   cout<<"level is"<<a.level<<endl;
//   cout<<"health is"<<a.getHealth()<<endl;
  
//   // dynamically...........
//   Hero *b=new Hero;
//   b->setLevel('B');
//   b->setHealth(70);
//   cout<<"level is"<<(*b).level<<endl;
//   cout<<"health is"<<(*b).getHealth()<<endl;


//   cout<<"level is"<<b->level<<endl;
//   cout<<"health is"<<b->getHealth()<<endl;

// ......................................
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

