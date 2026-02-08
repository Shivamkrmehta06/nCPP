#include <iostream>
using namespace std;

void mergeAlternately(string word1, string word2) {
        string ans;
        int len1 = word1.length();
        int len2 = word2.length();
        int start1 = 0;
        int start2 = 0;
        int mai = 0;
        while(start1<len1 && start2<len2){
            ans[mai++] = word1[start1++];
            ans[mai++] = word2[start2++];
        }
        cout<<ans<<endl;
    }


int main() {
    string a = "abc";
    string b = "pqr";
    mergeAlternately(a,b);
    return 0;
}
