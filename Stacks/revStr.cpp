//Reverse String using stack
#include <iostream>
using namespace std;

void revStr(string s){
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        char ch = s[i];
        st.push(ch);
    }
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<ans<<endl;
}

//bakwas logic hai
// void revNum(int num){
//     stack<int> n;
//     while(num!=0){
//         int digit = num%10;
//         n.push(digit);
//         num = num/10;
//     }
//     cout<<n.top()<<endl;
//     string ans;
//     while(!n.empty()){
//         int ny = n.top();
//         ans.push_back(ny+'0');
//         n.pop();
//     }
//     cout<<ans<<endl;
// }

int main() {
    string str = "Shivam";
    //revStr(str);
    //revNum(123);
    return 0;
}
