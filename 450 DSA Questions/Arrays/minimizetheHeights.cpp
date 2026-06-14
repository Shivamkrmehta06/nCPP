#include <iostream>
using namespace std;

/* 
For each tower, you must perform exactly one of the following operations exactly once.
Increase the height of the tower by k
Decrease the height of the tower by k
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
*/

int mindif(vector<int> arr,int k){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int small=0,big=0,ans=arr[n-1]-arr[0];
    for(int i=0;i<=n-1;i++){
        small=min(arr[0]+k,arr[i+1]-k);
        big=max(arr[i]+k,arr[n-1]-k);
        ans=min(ans,big-small);
    }
    return ans;
}

int main() {
    vector<int> a = {1, 8, 10, 6, 4, 6, 9, 1};
    int ans=mindif(a,2);
    cout<<endl;
    cout<<"Difference: "<<ans<<endl;
    return 0;
}
