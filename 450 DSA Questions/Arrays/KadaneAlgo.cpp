#include <iostream>
using namespace std;

// Largest Sum contiguous subarray
int sumsub(vector<int> arr){
    int result=arr[0];
    int sum=arr[0];
    for(int i = 1;i<arr.size();i++){
        sum = max(arr[i],arr[i]+sum);
        result = max(result,sum);
    }
    return result;
}

int main() {
    vector<int> arr = {1,2,3,-2,5};
    int ans = sumsub(arr);
    cout<<"Maximum Sum: "<<ans<<endl;
    return 0;
}
