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

 vector<string> fizzBuzz(int n) {
        string s = "Fizz";
        string s1 = "Buzz";
        string s2 = "FizzBuzz";
        vector<string> ans;
        for(int i = 1;i<=n;i++){
            if(i%3==0){
                ans.push_back(s);
            }
            else if(i%5==0) ans.push_back(s1);
            else if(i%5==0 && i%3==0) ans.push_back(s2);
            else {
                char ch = i;
                ans.push_back(ch);
            }
        }

int main() {
    isPowerOfThree(27);
    return 0;
}
