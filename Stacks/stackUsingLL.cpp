#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node* top;
    Stack(){
        top = NULL;
    }
    void push(int data){
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }
    void pop(){
        if(top == NULL){
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        return top->data;
    }
    bool isEmpty(){
        if(top == NULL){
            return true;
        }else{
            return false;
        }
    }
    void display(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};

int main() {
    Stack* s = new Stack();
    s->push(1);
    s->push(2);
    s->push(3);
    int ans = s->peek();
    cout<<ans<<endl;
    s->display();
    s->pop();
    s->display();
    return 0;
}
