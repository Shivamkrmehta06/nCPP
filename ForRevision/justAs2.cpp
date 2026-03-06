#include <iostream>
#include<map>
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

void missingNum(vector<int> &arr){
    unordered_map<int,int> mp;
    for(auto x:arr){
        mp[x]++;
    }
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
    vector<int> ans;
    for(int i = 1;i<=arr.size();i++){
        if(mp[i]==0){
            ans.push_back(i);
        }
    }
    cout<<endl<<endl;
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int main() {
    vector<int> arr = {4,3,2,7,8,2,3,1};
    //findDisappearedNumbers(arr);
    //missingNum(arr);
    cout<<(3/2)<<endl;
    return 0;
}
