#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int* arr;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }
    void push(int element){
        if(top<size-1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }else{
            top--;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else {
            cout<<"Stack Underflow"<<endl;
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
    void display(){
        if(top>=0){
            for(int i = 0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"Stack is empty"<<endl;
        }
    }
};

int main(){
    Stack s(5);
    s.push(1);
    int a = s.peek();
    cout<<a<<endl;
    s.push(2);
    //s.display();
    s.push(3);
    s.push(4);
    s.push(5);
    //s.push(6);
    //s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    bool an = s.isEmpty();
    an == true?cout<<"Empty"<<endl:cout<<"Not empty"<<endl;
    //int ans = s.peek();
    //.cout<<ans<<endl;
    s.display();

}