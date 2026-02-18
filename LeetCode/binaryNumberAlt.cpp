#include <iostream>
using namespace std;

void alternating(int num){
    int prev = (num&1);
    num = num>>1;
    int flag = 1;
    while(num!=0){
        int curr = num&1;
        if(curr==prev) flag = 0;
        prev = curr;
        num = num>>1;
    }
    flag==1?cout<<"Alternating"<<endl:cout<<"Not Alternating"<<endl;
}

int main() {
    int num = 7;
    alternating(num);
    return 0;
}
