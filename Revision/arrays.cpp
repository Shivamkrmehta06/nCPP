#include <iostream>
using namespace std;

void reverseArray(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

void swapAlternate(int *arr,int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int arrayDup(int *arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i = 0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}

// swap two variables without using of third variable
pair<int,int> swapPair(int a,int b){
    a = a^b;
    b=b^a;
    a=a^b;
    pair<int,int> ans=make_pair(a,b);
    return ans;
}

int missingNumber(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    for(int i =0;i<=nums.size();i++){
        ans^=i;
    }
    cout<<ans<<endl;
    return ans;
    }

void intersection(vector<int> arr,vector<int> arr2){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<arr.size()&&j<arr2.size()){
        if(arr[i]==arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }else if(arr[i]>arr2[j]){
            j++;
        }else{
            i++;
        }
    }
    for(auto x:ans) cout<<x<<" ";
}

int main() {
    // int arr[] = {1,2,3,4,5,8};
    // int size = sizeof(arr)/sizeof(int);
    //reverseArray(arr,size);
    // swapAlternate(arr,size);
    // for(auto s:arr) cout<<s<<" ";
    // cout<<endl;

    // int nums[] = {1,2,3,4,3};
    // int ans=arrayDup(nums,5);
    // cout<<"Duplicate: "<<ans<<endl;

    // pair<int,int> ans=swapPair(2,5);
    // cout<<ans.first<<" "<<ans.second<<endl;

    // vector<int> arr = {1,2,4,5}; 
    // int ans = missingNumber(arr);
    // cout<<"Missing Element: "<<ans<<endl;

    vector<int> arr = {1,2,3,4,5};
    vector<int> arr1 = {1,2,3};
    intersection(arr,arr1);

    return 0;
}
