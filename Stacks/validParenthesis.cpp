#include <iostream>
using namespace std;

bool isValid(string exp){
    stack<char> s;
    for(int i = 0;i<exp.size();i++){
        char ch = exp[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }else{
            if(!s.empty()){
                char top = s.top();
                if((ch==')'&&top=='(')||(ch=='}'||ch=='{')||(ch==']'&&top=='[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s.empty()) return true;
    else return false;
}

int main() {
    string s = "{([)])}";
    bool ans = isValid(s);
    ans==1?cout<<"Valid"<<endl:cout<<"Not Valid"<<endl;
    return 0;
}
