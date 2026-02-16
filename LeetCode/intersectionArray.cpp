#include <iostream>
using namespace std;

void intersection(vector<int> arr,vector<int> arr2){
    vector<int> arr3;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr2.size();j++){
            if(arr[i]==arr2[j]){
                arr3.push_back(arr2[i]);
            }
        }
    }
    
}

int main() {
    vector<int> nums = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    intersection(nums,nums2);
    return 0;
}
