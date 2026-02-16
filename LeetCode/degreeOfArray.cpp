#include <iostream>
using namespace std;

void degree(vector<int> arr){
    sort(arr.begin(),arr.end());
    for(auto x:arr) cout<<x<<" ";
    int count = 0;
    vector<int> ans;
    for(int i = 0;i<arr.size();i++){
        if(arr[i] == arr[i+1]&&(i+1)<arr.size()){
            count++;
        }else{
            ans.push_back(count);
        }
    }
    cout<<endl;
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    cout<<*max_element(ans.begin(),ans.end())<<endl;
}

int main() {
    vector<int> arr = {1,2,2,3,1};
    degree(arr);
    return 0;
}
