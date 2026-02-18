#include <iostream>
using namespace std;

void insertInSorted(vector<int> &arr,int data){
    vector<int> arr2;
    bool inserted = false;
    for(int i = 0;i<arr.size();i++){
        if(!inserted && arr[i]>=data){
            arr2.push_back(data);
            inserted = true;
        }
        arr2.push_back(arr[i]);
    }
    for(auto x:arr2) cout<<x<<" ";
    cout<<endl;

}

int main() {
    vector<int> arr = {1,3,5,7,9};
    insertInSorted(arr,2);
    bool var = true;
    cout<<(!var)<<endl;
    return 0;
}
