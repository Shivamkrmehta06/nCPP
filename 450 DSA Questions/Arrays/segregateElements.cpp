#include <iostream>
using namespace std;

void segregate(vector<int> &arr){
    int start=0;
    int end = arr.size()-1;
    int count=0;
    int pivot = arr[start];
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);
    int i = 0;
    pivotIndex++;
    while(i<=end){
        if(arr[i]<pivot){
            i++;
        }if(arr[i]>pivot&&arr[pivotIndex]<pivot){
            swap(arr[i],arr[pivotIndex]);
            i++;
            pivotIndex++;
        }
        i++;
    }
}

void seg(vector<int> &ans){
    int start=0,end=ans.size()-1;
    while(start<=end){
        if(ans[start]>=0){
            start++;
        }else if(ans[end]<0){
            end--;
        }else{
            swap(ans[start],ans[end]);
            start++;
            end--;
        }
    }
}

int main() {
    vector<int> arr={1, -1, 3, 2, -7, -5, 11, 6 };
    seg(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
