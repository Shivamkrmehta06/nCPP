#include <iostream>
using namespace std;

void solve(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}

stack<int> insertAtBottom(stack<int> &s,int x){
    solve(s,x);
    return s;
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
    insertAtBottom(s,7);
    display(s);
    return 0;
}
