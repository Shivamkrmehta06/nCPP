#include <iostream>
#include <vector>
using namespace std;

int missing(vector<int> nums){
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        ans ^= nums[i];
        ans ^= i;
    }
    ans ^= nums.size();
    return ans;
}

int main() {
    vector<int> ans = {3,0,1};
    cout << missing(ans) << endl;
    return 0;
}
