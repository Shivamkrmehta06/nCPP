#include <iostream>
#include<map>
using namespace std;

void singleNum(vector<int> &num){
    map<int,int> mp;
    for(int i = 0;i<num.size();i++){
        mp[num[i]]++;
    }
    for(auto x:mp) cout<<x.first<<"->"<<x.second<<endl;
    for(int i = 0;i<mp.size();i++){
        if(mp[i]==1){
            cout<<"Element: "<<i<<endl;
        }
    }
}

int main() {
    vector<int> a = {0,1,0,1,0,1,99};
    singleNum(a);
    return 0;
}
