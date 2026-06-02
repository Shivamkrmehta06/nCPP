#include <iostream>
using namespace std;

//O(n) solution for finding max element in any type of array

void maxEle(vector<int> arr){
    int maxi = INT_MIN;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"Max Element: "<<maxi<<endl;
}

//O(log n) solution for finding max element in a rotated and sorted array

void maxArray(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int max = 0;
    int mid = start+(end-start)/2;
    if(arr[start]<=arr[end]){
        max = arr[end];
        cout<<"Max Element: "<<max<<endl;
    }
    while(start<end){
        if(arr[mid]>arr[mid]+1){
            cout<<"Max Element: "<<arr[mid]<<endl;
            return;
        }else if(arr[start]<=arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    //cout<<"Max Element: "<<max<<endl;
}

//O(n) solution for finding minimum element

void miniEle(vector<int> arr){
    int mini = INT_MAX;
    for(auto x:arr){
        if(x<mini){
            mini = x;
        }
    }
    cout<<"Min Element: "<<mini<<endl;
}

//O(log n) solution to find minimum element in a rotated and sorted array

void miniArr(vector<int> arr){
    int start = 0, end = arr.size()-1;
    int mid = start+(end-start)/2;
    int mini = 0;
    if(arr[start]<=arr[end]){ 
        cout<<"Min Element: "<<arr[start]<<endl;
        return;
    }while(start<=end){
        if(arr[mid-1]>arr[mid]&&mid>0){
            mini = arr[mid];
            cout<<"Min Element: "<<mini<<endl;
            return;
        }else if(arr[mid]>=arr[start]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
}

int main() {
    vector<int> a = {1,2,3,4,5};
    vector<int> arr = {2, 3, 4, 5, 1};
    //maxArray(a);
    //maxEle(arr);
    miniArr(arr);
    miniArr(a);
    miniEle(arr);
    miniEle(a);
    return 0;
}
