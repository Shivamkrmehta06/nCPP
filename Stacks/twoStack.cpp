//two stacks in an array
#include <iostream>
using namespace std;

class Stack{
    public:
    int top1,top2, size,*arr;
    Stack(int size){
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int data){
        if(top2-top1>1){
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data){
        if(top2-top1>1){
            top2--;
            arr[top2] = data;
        }
    }
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }
};

int main() {
    
    return 0;
}
