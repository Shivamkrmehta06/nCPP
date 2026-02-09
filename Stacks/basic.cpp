#include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    Stack* s = new Stack(5);
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);
    int p = s->peek();
    cout<<"Peek Element: "<<p<<endl;
    return 0;
}
