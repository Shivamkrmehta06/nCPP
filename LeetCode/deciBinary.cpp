//Partitioning Into Minimum Number Of Deci-Binary Numbers
/* 
Har deci-binary number kisi bhi column me sirf 1 ya 0 de sakta hai.
First digit 8 hai
Matlab us column me total 8 banana hai.
Ek number sirf 1 de sakta hai →
Toh 8 lane ke liye 8 numbers lagenge.
Baaki digits (2,3,7,4) automatically manage ho jayenge un 8 numbers ke andar.
*/
#include <iostream>
using namespace std;

int deciBinary(string n){
        int maxDigit = INT_MIN;
        for(int i = 0;i<n.length();i++){
            maxDigit = max(maxDigit,n[i]-'0');
        }
}

int main() {
    
    return 0;
}
