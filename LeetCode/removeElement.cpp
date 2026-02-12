#include <iostream>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size()-1;
        int count = 0;
        if(nums.size() == 1 && nums[start] == val){
            nums.pop_back();
        }
        while(start<=end){
            if(nums[start] == val){
                swap(nums[start],nums[end]);
                count++;
                end--;
            }else{
                start++;
            }
        }
        for(auto x:nums) cout<<x<<" "; cout<<endl;
        while(count>0){
            nums.pop_back();
            count--;
        }
        for(auto x:nums) cout<<x<<" "; cout<<endl;
        int k = nums.size();
        cout<<"This is k:"<<k<<endl;
        return k;
    }

int main() {
    vector<int> arr = {1};
    removeElement(arr,3);
    return 0;
}
