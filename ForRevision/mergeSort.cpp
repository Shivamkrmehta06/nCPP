#include <iostream>
using namespace std;

void merge(vector<int> &arr,int start,int end){
    int mid = start+(end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    vector<int> first(len1);
    vector<int> second(len2);
    int mai = start;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mai++];
    }
    mai = mid+1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mai++];
    }
    int i1 = 0;
    int i2 = 0;
    mai = start;
    while(i1<len1 && i2<len2){
        if(first[i1]<second[i2]){
            arr[mai++] = first[i1++];
        }else{
            arr[mai++] = second[i2++];
        }
    }
    while(i1<len1){
        arr[mai++] = first[i1++];
    }
    while(i2<len2){
        arr[mai++] = second[i2++];
    }
}

void mergeSort(vector<int> &arr,int start,int end){
    if(start>=end)
        return;
    int mid = start+(end-start)/2;
    //left part sort karna hai
    mergeSort(arr,start,mid);
    //right part sort krna hai
    mergeSort(arr,mid+1,end);
    //merge
    merge(arr,start,end);
}

int main() {
    vector<int> arr = {4,5,1,2,3};
    mergeSort(arr,0,arr.size()-1);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
