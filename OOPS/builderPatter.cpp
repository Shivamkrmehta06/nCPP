#include <iostream>
using namespace std;
/* 
class User{
    string name;
    int age;
    string email;
    public:
        User& setName(string name){
            this->name = name;
            return *this;
        }
        User& setAge(int x){
            this->age = x;
            return *this;
        }
        User& setEmail(string y){
            this->email = y;
            return *this;
        }
        void print(){
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Email: "<<email<<endl;
        }
}; */

class User{
    string name;
    int age;
    string email;
    public:
        void show(){
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Email: "<<email<<endl;
        }
        class Builder{
            User* u;
            public:
            Builder& setName(string x){
                u->name;
            }
        };
};

int main() {
    return 0;
}
