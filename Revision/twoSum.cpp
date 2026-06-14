#include <iostream>
#include<map>
using namespace std;

vector<int> twoSum(vector<int> arr,int target){
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        int need = target-arr[i];
        if(mp.find(need)!=mp.end()){
            return {arr[need],i};
        }
        mp[arr[i]] = i;
    }
    return {};
}

void useOfMap(vector<int> arr){
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]] = i;
    }
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    //cout<<(mp.find(5)!=mp.end())<<endl;
    cout<<mp[arr[3]]<<endl;
}

//three sum
vector<vector<int>> threeSum(vector<int> arr,int target){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        unordered_map<int,int> mp;
        int need = target-arr[i];
        for(int j=i+1;j<arr.size();j++){
            int need2 = need-arr[j];
            if(mp.find(need2)!=mp.end()){
                ans.push_back({need2,arr[i],arr[j]});
            }
            mp[arr[j]] = j;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    // vector<int> ans = twoSum(arr,9);
    // for(auto x:ans) cout<<x<<" ";
    //useOfMap(arr);
    
    vector<int> test = {1,2,3,4,5,6,9};
    vector<vector<int>> ans = threeSum(test,11);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}
