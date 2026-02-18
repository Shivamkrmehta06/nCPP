#include <iostream>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> nextSmaller(vector<int> &arr,int size){
    stack<int> s;
    s.push(-1);
    vector<int> ans(size);
    for(int i = size-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> &arr,int size){
    stack<int> s;
    s.push(-1);
    vector<int> ans(size);
    for(int i = 0;i<size;i++){
        int curr = arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestAreaOfRectangle(vector<int> &height){
    int n = height.size();
    vector<int> next(n);
    next = nextSmaller(height,n);
    vector<int> prev(n);
    prev = prevSmaller(height,n);
    int ans = INT_MIN;
    for(int i = 0;i<n;i++){
        int l = height[i];
        if(next[i]==-1){
            next[i] = n;
        }
        int b = next[i]-prev[i]-1;
        int area = l*b;
        ans = max(ans,area);
    }
    return ans;
}

int main() {
    vector<int> arr = {2,1,5,6,2,3};
    int area = largestAreaOfRectangle(arr);
    cout<<"Area: "<<area<<endl;
    return 0;
}
