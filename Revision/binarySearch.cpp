#include <iostream>
using namespace std;

// First and last element of a sorted array
// 1 2 3 3 5

int leftMost(vector<int> arr,int key){
    int start=0;
    int ans=-1;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int rightMost(vector<int> arr,int key){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

// Total Occurence = Right Most Index - Left Most Index

int totalOcc(vector<int> arr,int key){
    int totalOccurence = (rightMost(arr,key) - leftMost(arr,key))+1;
    return totalOccurence;
}

// Find the square root of an element using Binary Search

int squareRoot(int n){
    int start=0;
    int end=n;
    while(start<end){
        int mid=start+(end-start)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,6};
    // leftMost(arr,6);
    // rightMost(arr,6);
    // int total = totalOcc(arr,6);
    // cout<<"Total Occurenece: "<<total<<endl;
    
    int ans = squareRoot(36);
    cout<<"Square Root: "<<ans<<endl;
    
    return 0;
}
