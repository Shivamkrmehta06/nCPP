#include <iostream>
#include<map>
using namespace std;

void countFrequency(string str){
    unordered_map<char,int> mp;
    for(int i = 0;i<str.size();i++){
        mp[str[i]]++;
    }
    for(auto x:mp) cout<<x.first<<"->"<<x.second<<endl;
}

//first non-repeating character;
void firstNon(string str){
    map<char,int> mp;
    for(int i = 0;i<str.size();i++){
        mp[str[i]]++;
    }
    char ans;
    for(auto x:mp){
        if(x.second==1){
            ans = x.first;
            break;
        }
    }
    cout<<"First non-repeating character is: "<<ans<<endl;
}

int main() {
    string a = "aabbcddex";
    countFrequency(a);
    firstNon(a);
    return 0;
}
