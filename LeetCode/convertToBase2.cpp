#include <iostream>
using namespace std;

int sizeOfInt(int num){
    int count = 0;
    while(num>0){
        count++;
        num = num/10;
    }
    return count;
}

int main() {
    int ans = sizeOfInt(50);
    cout<<ans<<endl;
    return 0;
}
