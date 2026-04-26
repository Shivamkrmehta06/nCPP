#include <iostream>
using namespace std;

void solve(vector<int> arr){
    vector<int> rightSum;
    vector<int> leftSum;
    int left = 0;
    int sum = 0;
    for(auto x:arr) sum+=x;
    rightSum.push_back(sum);
    for(int i = 0;i<arr.size();i++){
        int right = sum-left-arr[i];
        if(right>0)
            rightSum.push_back(right);
        left +=arr[i];
        leftSum.push_back(left);
    }
    for(auto x:leftSum) cout<<x<<" ";
    cout<<endl;
    for(auto x:rightSum) cout<<x<<" ";
}

int main() {
    vector<int> arr = {1,7,3,6,5,6};
    solve(arr);
    return 0;
}
