#include <iostream>
using namespace std;

void sortedInsert(stack<int> &s,int num){
    //base case
    if(s.empty()||(!s.empty()&&s.top()<num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortedInsert(s,num);
    s.push(n);
}

void sortStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack,num);
}

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

void insertAtBottom(stack<int> &n,int num){
    if(n.empty()){
        n.push(num);
        return;
    }
    int ne = n.top();
    n.pop();
    insertAtBottom(n,num);
    n.push(ne);
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

int main() {
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);
    display(s);
    sortStack(s);
    display(s);
    reverseStack(s);
    display(s);
    return 0;
}
