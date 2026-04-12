#include <iostream>
#include<map>
using namespace std;

void ransom(string a,string b){
    map<char,int> m;
    map<char,int> m1;
    for(int i = 0;i<a.length();i++){
        m[a[i]]++;
    }
    for(auto i=m.begin();i!=m.end();++i){
        cout<<i->first<<"->"<<i->second<<endl;
    }
    for(int i = 0;i<b.length();i++){
        m1[b[i]]++;
    }
    for(auto i=m1.begin();i!=m1.end();++i){
        cout<<i->first<<"->"<<i->second<<endl;
    }
}

int main() {
    string s = "aa";
    string p = "aab";
    ransom(s,p);
    return 0;
}
