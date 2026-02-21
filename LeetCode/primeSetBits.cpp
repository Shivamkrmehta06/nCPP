#include <iostream>
using namespace std;

int sieveOfEratosthenes(int n){
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(int i = 2;i<=n;i++){
        for(int j = 2*i;j<=n;j+=i){
            prime[j] = false;
        }
    }
    // cout<<count<<endl;
    // cout<<n<<"->"<<prime[n]<<endl;
    return prime[n];
}

void countBits(int n){
    int count = 0;
    int setBit = 0;
    while(n!=0){
        int bit = n&1;
        if(bit==1){
            setBit++;
        }
        count++;
        n = n>>1;
    }
    if(sieveOfEratosthenes(setBit)){
        cout<<"Number of SetBit: "<<setBit<<endl<<"Is Prime: Yes"<<endl;
    }else{
        cout<<"Number of Set Bits: "<<setBit<<endl<<"Is Prime: No"<<endl;
    }
    //cout<<"Number of Bits: "<<count<<endl;
    
}


int setBit(int num){
    int count = 0;
    while(num!=0){
        if((num&1)==1){
            count++;
        }
        num = num>>1;
    }
    return count;
}

void justDo(int left,int right){
    int size = right-left+1;
    vector<bool> ans(size,false);
    int j = 0;
    for(int i =left;i<=right;i++){
        int count = setBit(i);
        if(sieveOfEratosthenes(count)){
            ans[j] = true;
            j++;
        }else{
            j++;
        }
    }
    int cnt=0;
    for(int i = 0;i<ans.size();i++){
        if(ans[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}




int main() {
    //countBits(12); 
    justDo(10,15);
    return 0;
}
