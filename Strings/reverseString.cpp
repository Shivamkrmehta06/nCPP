#include <iostream>
using namespace std;

string revStr(string &str){
    int start = 0;
    int end = str.length()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}

bool verifyPallindrome(string s){
    int start = 0;
    int end = s.length()-1;
    while(start<end){
        
        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
}

void strFrequency(string s){
    unordered_map<char,int> a;
    for(int i = 0;i<s.length();i++){
        a[s[i]]++;
    }
    for(auto x:a) cout<<x.first<<"->"<<x.second<<endl;
}

int main() {
    string s = "madam";
    bool x = verifyPallindrome(s);
    cout<<"Palindrome: "<<x<<endl;
    strFrequency(s);
    return 0;
}
