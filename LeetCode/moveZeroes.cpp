#include <iostream>
using namespace std;

void moveZeroes(vector<int> &n){
    sort(n.begin(),n.end());
    int i = 0;
    int index = 0;
    while(i==0){
        index++;
        i++;
    }
    vector<int> temp;
    //int limit = n.size()-index;
    for(int i = 0;i<n.size();i++){
        if(n[i]>0){
            temp.push_back(n[i]);
        }
    }
    for(int i = 0;i<index;i++){
        temp.push_back(0);
    }
    
    n = temp;
    for(auto x:temp) cout<<x<<" ";
}

void moveZeroes1(vector<int> &arr){
    int j = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<arr.size()){
        arr[j] = 0;
        j++;
    }
}

int main() {
    vector<int> arr = {1};
    moveZeroes1(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
