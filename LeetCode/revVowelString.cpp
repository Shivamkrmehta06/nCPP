class Solution {
private:
    char toLower(char a){
        if(a>='A'&&a<='Z'){
            a = a-'A'+'a';
            return a;
        }
        return a;
    }
    bool isVowel(char ch){
        char a = toLower(ch);
        if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<=end){
            char chs = s[start];
            char che = s[end];
            bool iS = isVowel(chs);
            bool iE = isVowel(che);
            if(iS&&iE){
                swap(s[start],s[end]);
                start++;
                end--;
            }else if(!iS){
                start++;
            }else{
                end--;
            }           
        }
        return s;
    }
};