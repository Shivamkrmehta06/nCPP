#include <iostream>
using namespace std;

void searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start = 0;
        int end = nums.size()-1;
        int mid = start+(end-start)/2;
        while(start<=end){
             if(nums[mid]==target){
            //     ans.push_back(start);
            //     ans.push_back(end);}
            return;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        };
        for(auto x:ans) cout<<x<<" ";
    }

int main() {
    vector<int> ans = {5,7,7,8,8,10};
    searchRange(ans,6);
    //for(auto x:a) cout<<x<<" ";
    return 0;
}
