#include <iostream>
using namespace std;

void prefixSum(vector<int> arr){
    int sum = 0;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        ans.push_back(sum);
    }
    for(auto x:ans) cout<<x<<" ";
}

void suffixSum(vector<int> arr){
    int sum= 0;
    int n = arr.size();
    vector<int> ans(n);
    ans[n-1] = arr[n-1];
    for(int i = n-2;i>=0;i--){
        ans[i] = arr[i]+ans[i+1];
    }
    for(auto x:ans) cout<<x<<" ";
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    prefixSum(arr);
    cout<<endl;
    suffixSum(arr);
    return 0;
}
