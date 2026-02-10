#include <iostream>
using namespace std;

void reverseArray(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int> arr,int k){
    vector<int> ans;
    reverseArray(arr);
    for(int i = 0;i<k;i++){
        ans.push_back(arr[i]);
    }
    for(int i = arr.size()-1;i>=k;i--){
        ans.push_back(arr[i]);
    }
    for(auto x:ans) cout<<x<<" ";
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    rotateArray(arr,3);
    return 0;
}
