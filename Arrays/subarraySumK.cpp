#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(const vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0;
    int count = 0;

    for(int i = 0;i<arr.size();i++){
        sum += arr[i];
        if(mp.find(sum-k)!=mp.end()){
             count++;
        }
        mp[sum]++;
    }
    cout<<count<<endl;
}

int main() {
    vector<int> a = {1,1,1};
    int k = 2;
    solve(a,k);
    cout<<10/100<<endl;
    return 0;
}
