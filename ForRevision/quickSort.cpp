#include <iostream>
using namespace std;

int partition(vector<int> &arr,int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right position
    int pivotIndex = start+count;
    swap(arr[pivotIndex],arr[start]);
    int i = start,j = end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &arr,int start,int end){
    //base case
    if(start>=end)
        return;
    //partiton logic
    int p = partition(arr,start,end);
    //left part sort
    quickSort(arr,start,p-1);
    //right part sort
    quickSort(arr,p+1,end);
}

int main() {
    vector<int> arr = {5,2,3,4,1};
    quickSort(arr,0,arr.size()-1);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
