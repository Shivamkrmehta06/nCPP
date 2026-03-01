#include <iostream>
using namespace std;

void findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;

        int j = 0;
        for(int i = 1; i <= nums.size(); i++) {
            while(j < nums.size() && nums[j] < i) {
                j++;
            }
            if(j >= nums.size() || nums[j] != i) {
                res.push_back(i);
            }
        }
        for(auto x:res) cout<<x<<" ";

    }

int main() {
    vector<int> arr = {4,3,2,7,8,2,3,1};
    findDisappearedNumbers(arr);
    return 0;
}
