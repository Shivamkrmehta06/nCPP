#include <iostream>
using namespace std;

void insertAtBottom(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int num = s.top();
    s.pop();
    insertAtBottom(s,n);
    s.push(num);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,num);
}

void display(stack<int> ans){
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }cout<<endl;
}

int main() {
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    display(a);
    insertAtBottom(a,6);
    display(a);
    reverseStack(a);
    display(a);
    return 0;
}
