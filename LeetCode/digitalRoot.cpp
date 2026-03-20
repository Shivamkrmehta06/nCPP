#include <iostream>
using namespace std;

int digitalRoot(int num){
    while(num>=10){
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum+=digit;
            num = num/10;
        }
        num = sum;
    }
    return num;
}

//solve using formula
int digitalRootF(int num){
    int ans = 1+(num-1)%9;
    return ans;
}

int main() {
    
    return 0;
}
