#include <iostream>
#include<vector>
using namespace std;

void strStr(string haystack, string needle) {
        int start = 0;
        int start2 = 0;
        string s;
        int i = 0;
        while(start<haystack.length() && start2<needle.length()){
            if(haystack[start] == needle[start2]){
                s[i] = haystack[start];
                start++;
                start2++;
                i++;
            }
            else{
                start++;
            }
        }
        cout<<s<<endl;
    }
int main() {
    string ha = "Shivam";
    string need = "Mehta";
    strStr(ha,need);
    return 0;
}


