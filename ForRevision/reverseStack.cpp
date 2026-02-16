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

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,num);
}

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

bool validParenthesis(string str){
    stack<char> s;
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }else{
            if(!s.empty()){
                int top = s.top();
                if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='[')){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s.empty()) return true;
    else return false;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    display(s);
    insertAtBottom(s,0);
    display(s);
    reverseStack(s);
    display(s);
    return 0;
}
