#include <iostream>
using namespace std;

int countPrime(int n){
    vector <bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(int i = 2;i<=n;i++){
        for(int j = 2*i;j<=n;j = j+i){
            prime[j] = 0;
        }
    }
    if(prime[n]==0) cout<<"Not Prime"<<endl;
    else cout<<"Prime"<<endl;
    return 0;
}

int main() {
    int ans = countPrime(15);
    return 0;
}