#include <iostream>
using namespace std;

void solve(vector<int> arr,int n){
    vector<string> ans;
    int current = 1,i = 0;
    while(i<arr.size()){
        ans.push_back("Push");
        if(arr[i]==current){
            i++;
        }else{
            ans.push_back("Pop");
        }
        current++;
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int main() {
    vector<int> a = {1,2,3};
    solve(a,3);
    return 0;
}
