#include <iostream>
#include<map>
using namespace std;

int countOneBit(int num){
    int count = 0;
    while(num!=0){
        int digit = num&1;
        if(digit==1){
            count++;
        }
        num=num>>1;
    }
    return count;
}

void sortBit(vector<int> &arr){
    vector<pair<int,int>> ans;
    for(int i = 0;i<arr.size();i++){
        ans.push_back({countOneBit(arr[i]),arr[i]});
    }
    for(auto x:ans) cout<<x.first<<"->"<<x.second<<endl;
    cout<<endl;
    sort(ans.begin(),ans.end());
    for(auto x:ans) cout<<x.first<<"->"<<x.second<<endl;
    cout<<endl;
    vector<int> result;
    for(auto x:ans){
        result.push_back(x.second);
    }   
    cout<<endl; 
    for(auto x:result) cout<<x<<" ";
}

void sortBits(vector<int> &arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        
        if(countA == countB)
            return a < b;
        
        return countA < countB;
    });

    for(auto x : arr)
        cout << x << " ";
}

int main() {
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    sortBit(arr);
    return 0;
}
