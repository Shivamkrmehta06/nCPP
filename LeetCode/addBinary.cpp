#include <iostream>
using namespace std;

void addBinary(string one,string two){
    int i = one.length()-1;
    int carry = 0;
    int sum = 0;
    string ans;
    while(i>=0){
        if(one[i]=='0' && two[i]=='0'){
            sum = carry;
            carry = 0;
        }else if((one[i]=='0' && two[i]=='1')||(one[i]=='1' && two[i]=='0')){
            sum = 1^carry;
            carry = carry==1?1:0;
        }else if(one[i]=='1' && two[i]=='1'){
            sum = carry;
            carry = 1;
        }
        ans.push_back(sum+'0');
        i--;
    }
    if(carry==1) ans.push_back(carry+'0');
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

int main() {
    addBinary("11","01");
    return 0;
}
