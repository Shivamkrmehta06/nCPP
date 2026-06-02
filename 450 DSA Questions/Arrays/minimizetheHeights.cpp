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
    for(int i = 0;i<n;i++){
        if(i<n/2-1){
            arr[i]=arr[i]+k;
        }else{
            arr[i]=arr[i]-k;
        }
    }
    for(auto x:arr) cout<<x<<" ";
    int maxi = *max_element(arr.begin(),arr.end());
    int mini = *min_element(arr.begin(),arr.end());
    int diff = maxi-mini;
    cout<<endl;
    cout<<"Max: "<<maxi<<endl<<"Min: "<<mini<<endl;
    cout<<diff<<endl;
    return maxi-mini;
}

int main() {
    vector<int> a = {1, 8, 10, 6, 4, 6, 9, 1};
    int ans=mindif(a,2);
    cout<<endl;
    cout<<"Difference: "<<ans<<endl;
    return 0;
}
