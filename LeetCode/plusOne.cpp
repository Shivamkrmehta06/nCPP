#include <iostream>
using namespace std;

void plusOne(vector<int> arr){
    reverse(arr.begin(),arr.end());
    int digit = 0;
    for(int i = 0;i<arr.size();i++){
        digit += pow(10,i)*arr[i];
    }
    digit = digit+1;
    cout<<digit<<endl;
    vector<int> ans;
    while(digit>0){
        int di = digit%10;
        ans.push_back(di);
        digit = digit/10;
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    
}

int main() {
    vector<int> a = {1,2,4};
    // reverse(a.begin(),a.end());
    // for(int x:a) cout<<x<<" ";    
    // cout<<endl;
    // cout<<pow(10,2)<<endl;

    plusOne(a);    
    return 0;
}
