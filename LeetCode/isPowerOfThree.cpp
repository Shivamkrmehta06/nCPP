#include <iostream>
using namespace std;

bool isPowerOfThree(int n){
    vector<long int> arr;
    long int ans = 1;
    for(int i = 1;i<=31;i++){
        ans = ans*3;
        arr.push_back(ans);
    } 
    for(int i = 0;i<=31;i++){
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

int main() {
    isPowerOfThree(27);
    return 0;
}
