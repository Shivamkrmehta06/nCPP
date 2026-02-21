#include <iostream>
#include<vector>
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

bool knows(vector<vector<int>> &m,int a,int b,int size){
    if(m[a][b]==1){
        return true;
    }else{
        return false;
    }
}

int celebrityProblem(vector<vector<int>> &m,int size){
    stack<int> s;
    for(int i = 0;i<size;i++){
        s.push(i);
    }
    while(s.size()>1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(knows(m,a,b,size)==1){
            s.push(b);
        }else{
            s.push(a);
        }
    }
    int candidate = s.top();
    bool rowCheck = false;
    int zeroCount = 0;
    for(int i = 0;i<size;i++){
        if(m[candidate][i]==0){
            zeroCount++;
        }if(zeroCount==size){
            rowCheck = true;
        }
    }
    int colCheck = false;
    int oneCount = 0;
    for(int i = 0;i<size;i++){
        if(m[i][candidate]==1){
            oneCount++;
        }if(oneCount==size-1){
            colCheck = true;
        }
    }
    if(colCheck==true&&rowCheck==true) return candidate;
    else return -1;
}

int main() {
    //stack<int> a;
    // a.push(1);
    // a.push(2);
    // a.push(3);
    // a.push(4);
    // a.push(5);
    // display(a);
    // insertAtBottom(a,6);
    // display(a);
    // reverseStack(a);
    // display(a);
    vector<vector<int>> a = {{0,1,0},{0,0,0},{1,1,0}};
    int ans = celebrityProblem(a,a.size());
    cout<<"Answer: "<<ans<<endl;
    return 0;
}
