#include <iostream>
#include <vector>
using namespace std;

void reRotate(vector<int> &arr,int k){
    vector<int> ans(arr.size());
    for(int i = 0;i<arr.size();i++){
        ans[(i+k)%arr.size()] = arr[i];
    }
    for(auto x:ans) cout<<x<<" ";
    int start = 0;
    int end = ans.size();
    int mid = start+(end-start)/2;
    while(start<end){
        if(ans[mid]==k){
            cout<<"Element is at index: "<<mid<<endl;
        }else if(k>ans[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    reRotate(arr,3);
    return 0;
}
