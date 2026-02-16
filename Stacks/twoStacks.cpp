#include <iostream>
using namespace std;

class Stack{
    public:
    int top1;
    int top2;
    int size;
    int *arr;
    Stack(int size){
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
        arr = new int[size];
    }
    void push1(int ele){
        if(top2-top1>1){
            top1++;
            arr[top1] = ele;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void push2(int ele){
        if(top2-top1>1){
            top2++;
            arr[top2] = ele;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1 == -1){
            cout<<"Stack Underflow"<<endl;
        }else{
            int ans = arr[top1];
            top1--;
            return ans; 
        }
    }
    int pop2(){
        if(top1 ==size){
            cout<<"Stack Underflow"<<endl;
        }else{
            int ans = arr[top2];
            top1++;
            return ans; 
        }
    }
};

int main() {

    return 0;
}
