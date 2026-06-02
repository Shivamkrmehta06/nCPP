#include <iostream>
using namespace std;

int partition(vector<int> &arr,int start,int end){
    int i = start-1;
    int pivot = arr[end];
    for(int j = start;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

int quickSelect(vector<int> &arr,int start,int end,int k){
    if(start==end) return arr[start];
    int p = partition(arr,start,end);
    if(p==k-1) return arr[p];
    else if(k-1>p){
        return quickSelect(arr,p+1,end,k);
    }else{
        return quickSelect(arr,start,p,k);
    }
}

int main() {
    vector<int> arr = {7,3,1,5,2};
    partition(arr,0,4);
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;
    int a = quickSelect(arr,0,4,3);
    cout<<"Kth Min Element: "<<a<<endl;
    return 0;
}
