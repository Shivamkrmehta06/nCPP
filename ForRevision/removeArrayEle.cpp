#include <iostream>
using namespace std;

void removeEle(vector<int> &arr,int index){
    for(int i = index;i<arr.size();i++){
        arr.erase(arr.begin()+i);
    }
}

void removeEleA(int* arr,int size,int index){
    for(int i = index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    size--;
}

int main() {
    // vector<int> arr = {1,2,3,4,5};
    // removeEle(arr,3);
    // for(auto x:arr) cout<<x<<" ";
    // cout<<endl;
    
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    removeEleA(arr,5,3);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
