#include<iostream>
using namespace std;

void nextSmaller(vector<int> &arr){
    vector<int> ans(arr.size());
    stack<int> s;
    s.push(-1);
    for(int i = arr.size()-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

void prevSmaller(vector<int> &arr){
    vector<int> ans(arr.size());
    stack<int> s;
    s.push(-1);
    for(int i = 0;i<arr.size();i++){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,4};         
    prevSmaller(arr);
}