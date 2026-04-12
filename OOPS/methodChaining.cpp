/* 
Ek hi line me multiple functions call karna
obj.fun1().fun2().fun3();
*/

#include <iostream>
using namespace std;

class Hero{
    char name[100];
    int health;
    char level;
    public:
    Hero& setHealth(int h){
        this->health = h;
        return *this;
    }
    Hero& setLevel(char lev){
        this->level = lev;
        return *this;
    }
    Hero& increaseHealth(int x){
        this->health+=x;
        return *this;
    }
    Hero& print(){
        cout<<"Current Level: "<<level<<endl<<"Current Health: "<<health<<endl;
        return *this;
    }
};

int main() {
    Hero h1;
    h1.setHealth(20).setLevel('A').print().increaseHealth(10).print();
    return 0;
}
