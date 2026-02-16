#include <iostream>
using namespace std;

class oops{
    public:
    int a;
    int b;
    oops(int a,int b){
        this->a = a;
        this->b = b;
    }
    void add(int a,int b){
        cout<<"Addition: "<<(a+b)<<endl;
    }
};

void checkPallindrome(int num){
    int rev = 0;
    while(num!=0){
        int digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    cout<<rev<<endl;
}

int main() {
    //   oops* a = new oops(5,6);
    //   a->add(5,6);
    checkPallindrome(121);

    return 0;
}
