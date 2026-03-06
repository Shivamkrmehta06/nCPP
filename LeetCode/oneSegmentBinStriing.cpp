#include <iostream>
using namespace std;

bool checkOneSegmentBS(string s){
    for(int i = 1;i<s.length();i++){
        if(s[i]=='1'&&s[i-1]=='0'){
            return false;
        }
    }
    return true;
}

int main() {
    string s = "1001";
    string s1 = "1000";
    int ans = checkOneSegmentBS(s);
    ans==true?cout<<"OneSeg"<<endl:cout<<"Not One Seg"<<endl;
    return 0;
}
