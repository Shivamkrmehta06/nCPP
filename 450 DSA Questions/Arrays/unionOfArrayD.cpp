#include <iostream>
#include<set>
using namespace std;

//Union of Arrays with Duplicates
void unio(vector<int> a,vector<int> b){
    int i=0,j=0;
    int len1=a.size();
    int len2=b.size();
    set<int> ans;
    while(i<len1&&j<len2){
        if(a[i]<b[j]){
            ans.insert(a[i++]);
        }else{
            ans.insert(b[j++]);
        }
    }while(i<len1){
        ans.insert(a[i++]);
    }while(j<len2){
        ans.insert(b[j++]);
    }
    for(auto x:ans) cout<<x<<" ";
    vector<int> vans;
    for(auto x:ans) vans.push_back(x);
    cout<<endl;
    for(auto x:vans) cout<<x<<" "; 
}

int main() {
    vector<int> a={1, 2, 3, 2, 1};
    vector<int> b={3, 2, 2, 3, 3, 2};
    unio(a,b);
    return 0;
}
