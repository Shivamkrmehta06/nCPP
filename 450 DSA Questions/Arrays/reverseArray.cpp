#include <iostream>
using namespace std;

void reverseArray(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void reverseArrayRec(vector<int> &arr,int start,int end){
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reverseArrayRec(arr,start+1,end-1);
}

int main() {
    vector<int> a = {1,2,3,4,5};
    //reverseArray(a);
    reverseArrayRec(a,0,4);
    for(auto x:a) cout<<x<<" ";
    return 0;
}
