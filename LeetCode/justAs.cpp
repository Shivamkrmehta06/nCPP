#include <iostream>
using namespace std;

void abc(string moves){
    vector<char> ans;
    for(auto x:moves){
        ans.push_back(x);
    }
    for(auto y:ans) cout<<y<<" ";
    cout<<endl<<endl;
    cout<<ans[0]<<endl;
}

int main() {
    abc("LLLL");
    int rC=0,lC=0,uC=0,dC=0;
    cout<<lC<<endl<<uC<<endl;
    return 0;
}
