#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(string name){
        this->name = name;
    }
    Student(Student &s){
        name = s.name;
    }
};

// Example of Shallow Copy
// class Demo{
//     public:
//     int* data;
//     Demo(int x){
//         data = new int(x);
//     }
// };

// Example of Deep Copy
class Demo{
    public:
    int *data;
    Demo(int x){
        data = new int(x);
    }    
    Demo(Demo &s){
        data = new int(*s.data);
    }
    ~Demo(){
        delete data;
    }
};

class BankAccount{
    private:
        int balance;
    public:
        void deposit(int amount){
            balance+=amount;
        }
        int getBalance(){
            return balance;
        }
};

class coffeeMachine{
    public:
    void makeCoffee(){
        boilWater();
        grindBeans();
        mix();
    }
    private:    
        void boilWater(){
            cout<<"Boiling Water..."<<endl;
        }
        void grindBeans(){
            cout<<"Grinding Beans..."<<endl;
        }
        void mix(){
            cout<<"Coffee Ready..."<<endl;
        }
};

class Animal{
    public: 
    void sound(){
        cout<<"Animal make some sound!"<<endl;
    }
};

class Cat:public Animal{
    public:
    void pets(){
        cout<<"Cats are domestics pet"<<endl;
    }
    void sound(){
        cout<<"Cats Meows"<<endl;
    }
};

int main() {
    Student s1("Shivam");
    Student s2 = s1;
    // cout<<endl<<"\tBefore Update"<<endl;
    // cout<<s1.name<<endl;
    // cout<<s2.name<<endl;
    // cout<<endl<<"\tAfter Update"<<endl;
    // s1.name = "Kunal";
    // cout<<s1.name<<endl;
    // cout<<s2.name<<endl;  
  
    // Demo d1(10);
    // Demo d2 = d1;
    // cout<<endl<<"\tBefore Update"<<endl;
    // cout<<d1.data<<endl;
    // cout<<d2.data<<endl;   
  
    // coffeeMachine kent;
    // kent.makeCoffee();

    Animal a;
    Cat b;
    a.sound();
    b.sound();
    b.pets();    
    return 0;
}
