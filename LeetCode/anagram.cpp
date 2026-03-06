#include <iostream>
using namespace std;

bool isAnagram(string s,string t){
    if(s.length()!=t.length()) return false;
    vector<int> count(26,0);
    for(auto x:s){
        count[x-'a']++;
    }
    for(auto y:t){
        count[y-'a']--;
    }
    for(auto z:count){
        if(z!=0) return false;
    }
    return true;
}

int main() {
    bool ans = isAnagram("eatdsa","tea");
    ans==true?cout<<"Anagram"<<endl:cout<<"Not Anagram"<<endl;
    return 0;
}
