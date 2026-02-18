#include <iostream>
using namespace std;

bool redundantBrackets(string str){
    stack<char> s;
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            s.push(ch);
        }else{
            if(ch==')'){
                bool isRedundant = true;
                while(s.top()!='('){
                    char top = s.top();
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        isRedundant = false;
                    }
                    s.pop();
                }
                if(isRedundant==true) return true;
                s.pop();
            }
        }
    }
    return false;
}

int main() {
    string a = "(a+b)";
    string b = "((a+b))";
    bool ans = redundantBrackets(a);
    bool ans2 = redundantBrackets(b);
    ans==true?cout<<"Redundant"<<endl:cout<<"Not redundant"<<endl;
    ans2==true?cout<<"Redundant"<<endl:cout<<"Not redundant"<<endl;
    return 0;
}