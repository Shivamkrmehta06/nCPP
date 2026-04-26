// Number of digit one from n to 1

#include <iostream>
using namespace std;

int solve(int n){
    if(n==0) return 0;
    int count = 0;
    int temp = n;
    while(temp!=0){
        int digit = temp%10;
        if(digit==1) count = count+1;
        temp = temp/10;
    }
    
    return count+solve(n-1);
}


int countDigitOne(int n) {
    int count = 0;
    int ans = solve(n);
    return ans;
}

int main() {
    int n = 13;
    int count = 0;
    int ans = solve(n);
    cout<<"Count: "<<ans<<endl;    
    return 0;
}
