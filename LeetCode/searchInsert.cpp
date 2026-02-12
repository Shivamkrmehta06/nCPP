#include <iostream>
using namespace std;



int searchInsert(vector<int> &arr,int target){
   // int ans = binarySearch(arr,target);
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(target>arr[mid]){
            start = mid+1;
        }else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }  
    return start;
}

int main() {
    vector<int> arr = {1,3,5,6};
    //binarySearch(arr,2);
    //cout<<ans<<endl;
    //searchInsert(arr,2);
    return 0;
}
