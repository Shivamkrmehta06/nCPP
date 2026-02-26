
 #include <iostream>
 using namespace std;
 
 int main() {
    
    return 0;
 }
 
 int binaryGap(int n) {
        int oneIn=-1;
        int oneInT = 0;
        int ans = 0;
        while(n!=0){
            if((n&1)==1){
                if(oneIn!=-1){
                    ans=max(ans,oneInT-oneIn);
                }
                oneIn=oneInT;
            }
            n = n>>1;
            oneInT++;
        }
        return ans;
    }
