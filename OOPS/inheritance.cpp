#include <iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Animals can make sound!"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak_(){
        cout<<"Dog Barks!"<<endl;
    }
};

int main() {
    
    //Animal* n = new Animal();
    //n->speak();
    //Dog* d1 = new Dog();
    // d1->speak();
    
    vector<int> arr = {9,1,4,5,2};
    sort(arr.begin(),arr.end(),[](int a,int b){
        return a>b;
    });
    for(auto x:arr) cout<<x<<" ";

    return 0;
}
