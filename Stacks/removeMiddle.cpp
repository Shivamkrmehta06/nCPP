//Remove middle element from the middle of a stack
#include <iostream>
using namespace std;

void solve(stack<int> &inputStack,int size,int count){
    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack,size,count+1);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack){
    int count = 0;
    int size = inputStack.size();
    solve(inputStack,size,count);
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
    deleteMiddle(s);
    display(s);
    return 0;
}
