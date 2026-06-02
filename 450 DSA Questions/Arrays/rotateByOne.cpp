#include <iostream>
using namespace std;

// Rotate Array by One
void rotate(vector<int> &arr){
    int k = arr.size();
    vector<int> ans(k);
    for(int i = 0;i<k;i++){
        ans[(i+1)%k] = arr[i];
    }
    for(auto x:ans) cout<<x<<" ";
}

int main() {
    vector<int> a={1, 2, 3, 4, 5};
    rotate(a);
    return 0;
}
