#include <iostream>
using namespace std;

bool compare(int a,int b){
     return a>b;
}



void sortAs(vector<int> &arr){
    sort(arr.begin(),arr.end(),[](int a,int b){
        if(a%3==0&&b%3!=0) return true;
        if(a%3!=0&&b%3==0) return false;
        return a<b;
    });
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;
}

int main() {
    vector<int> a = {2,4,8,3,1,5,6,7,9,12};
    sortAs(a);
    return 0;
}
