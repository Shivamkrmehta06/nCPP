// Sort 0,1,2 
#include <iostream>
using namespace std;

// Solving using Dutch National Flag Algorithm
void sortii(vector<int> &arr){
    int start=0,mid=0, end = arr.size()-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}

int main() {
    vector<int> a = {0, 1, 2, 0, 1, 2};
    sortii(a);
    for(auto x:a) cout<<x<<" ";
    return 0;
}
