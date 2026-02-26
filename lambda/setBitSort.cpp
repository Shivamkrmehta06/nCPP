#include <iostream>
#include<algorithm>
using namespace std;

int setBit(int num){
    int count = 0;
    while(num!=0){
        int digit = num&1;
        if(digit==1) count++;
        num = num>>1;
    }
    return count;
}

void sortSet(vector<int> &arr){
    sort(arr.begin(),arr.end(),[](int a,int b){
       int countA = __builtin_popcount(a);
       int countB = __builtin_popcount(b);
       if(countA>countB) return true;
       if(countA<countB) return false;
       return a<b;
    });
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;
}

int main() {
    vector<int> arr = {8,3,10,7};
    sortSet(arr);
    return 0;
}
