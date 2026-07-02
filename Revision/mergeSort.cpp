#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> ans;

    void merge(vector<pair<int,int>> &arr, int start, int end) {

        int mid = start + (end - start) / 2;

        int len1 = mid - start + 1;
        int len2 = end - mid;

        vector<pair<int,int>> first(len1);
        vector<pair<int,int>> second(len2);

        // Copy values
        int mainIndex = start;
        for(int i = 0; i < len1; i++) {
            first[i] = arr[mainIndex++];
        }

        for(int i = 0; i < len2; i++) {
            second[i] = arr[mainIndex++];
        }
        int index1 = 0;
        int index2 = 0;
        mainIndex = start;

        int rightCount = 0;

        while(index1 < len1 && index2 < len2) {

            if(first[index1].first > second[index2].first) {
                rightCount++;
                arr[mainIndex++] = second[index2++];

            } else {

                ans[first[index1].second] += rightCount;
                arr[mainIndex++] = first[index1++];
            }
        }

        while(index1 < len1) {
            ans[first[index1].second] += rightCount;
            arr[mainIndex++] = first[index1++];
        }

        while(index2 < len2) {
            arr[mainIndex++] = second[index2++];
        }
    }

    void mergeSort(vector<pair<int,int>> &arr, int start, int end) {

        if(start >= end)
            return;

        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, end);
    }

    vector<int> countSmaller(vector<int>& nums) {

        int n = nums.size();
        ans.assign(n, 0);
        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        mergeSort(arr, 0, n - 1);

        return ans;
    }
};

int main() {
    vector<int> arr = {5,3,1,4,2};
    mergeSort(arr,0,arr.size()-1);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
