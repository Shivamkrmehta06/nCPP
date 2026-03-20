#include <iostream>
using namespace std;

// A perfect square always has an odd number of divisors (e.g., 9 has 1, 3, 9).

void perfectSquare(int num){
    int count = 0;
    for(int i = 0;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    cout<<count<<endl;
}


int main() {
    cout<<"Enter a Number: ";
    int a;
    cin>>a;
    perfectSquare(a);
    return 0;
}
