#include <iostream>
using namespace std;

bool knows(vector<vector<int>> &m,int a,int b,int n){
    if(m[a][b]==1)
        return true;
    else
        return false;
}

int celebrity(vector<vector<int>> &m,int n){
    stack<int> s;
    for(int i = 0;i<n;i++){
        s.push(i);
    }
    //getting 2 elements and compairing them
    cout<<"Size of Stack: "<<s.size()<<endl;
    while(s.size()>1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(knows(m,a,b,n)){
            s.push(b);
        }else{
            s.push(a);
        }
    }
    int candidate = s.top();
    
    //single element in stack is potential candidate, so verify it
    bool rowCheck = false;
    int zeroCount = 0;
    for(int i = 0;i<n;i++){
        if(m[candidate][i]==0){
            zeroCount++;
        }if(zeroCount==n){
            rowCheck = true;
        }
    }
    bool colCheck = false;
    int oneCount = 0;
    for(int i = 0;i<n;i++){
        if(m[i][candidate]==1){
            oneCount++;
        }if(oneCount==n-1){
            colCheck = true;
        }
    }
    if(rowCheck==true&&colCheck==true) return candidate;
    else return -1;
}

int main() {
    vector<vector<int>> s = {{0,1,1},{0,0,1},{0,0,0}};
    for(auto x:s){
        for(auto a:x){
            cout<<a<<" ";
        }cout<<endl;
    }
    cout<<s.size()<<endl;
    int ans = celebrity(s,s.size());
    cout<<"Celebrity: "<<ans<<endl;
    return 0;
}
