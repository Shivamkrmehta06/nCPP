#include<iostream>
#include<map>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        map<int,bool> s;
        int count;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size()-1;j++){
                if(nums[i]==nums[j]){
                    nums.erase(nums.begin()+j);
                    count++;
                }
            }
        }
        return count;
    }

int main(){
    vector<int> a = {1,1,2};
    
    int ans = removeDuplicates(a);
    cout<<ans<<endl;
}