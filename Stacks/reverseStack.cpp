#include <iostream>
using namespace std;

void insertAtBottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(num);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,num);
}

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    display(s);
    reverse(s);
    display(s);
    return 0;
}
