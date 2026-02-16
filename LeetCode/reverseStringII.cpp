#include <iostream>
using namespace std;

void reverseStr(string &s,int start,int end){
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

void strRev(string &s,int k){
    int sy = s.size();
    for(int i = 0;i < sy;i+=2*k){
        int left = i;
        int right = min(i+k-1,sy-1);
        // while(left<right){
        //     swap(s[left],s[right]);
        //     left++;
        //     right--;
        // }
        reverseStr(s,left,right);
    }

}

int main() {
    string s = "Shivam";
    //string as = reverseStr(s,0,s.length()-1);
    //reverseStr(s,0,s.length()-1);
    //cout<<s<<endl;
    strRev(s,2);
    cout<<s<<endl;
    return 0;
}
