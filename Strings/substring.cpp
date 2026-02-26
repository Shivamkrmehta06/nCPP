#include <iostream>
using namespace std;

void substring(string s){
    for(int i = 0;i<s.length();i++){
        for(int j = i;j<s.length();j++){
            cout<<s.substr(i,j-i+1)<<" ";
        }
        cout<<endl;
    }
}

int main() {
    string s = "abc";
    substring(s);
    return 0;
}
