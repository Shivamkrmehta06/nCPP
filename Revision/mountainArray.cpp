#include <iostream>
using namespace std;

// Mountain Array

int ascendingMountain(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    return start;
}

int descendingMountain(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            end=mid;
        }else{
            start=mid+1;
        }
    }
    return arr[end];
}

int binarySearch(vector<int> arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}

int binarySearchD(vector<int> arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int searchInMountain(vector<int> arr,int key){
    int peak=ascendingMountain(arr);
    int leftPart=binarySearch(arr,0,peak,key);
    int rightPart=binarySearchD(arr,peak+1,arr.size()-1,key);
    return (leftPart==-1)?rightPart:leftPart;
}

int main() {
    vector<int> arr={1,3,5,7,6,4,2};
    // int ans=ascendingMountain(arr);
    // cout<<"Peak: "<<ans<<endl;
    // int ans2=descendingMountain(arr);
    // cout<<"Peak(D): "<<ans2<<endl; 
    int ans3=searchInMountain(arr,4);
    cout<<"Element is at Index: "<<ans3<<endl;
    return 0;
}
