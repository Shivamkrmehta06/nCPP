#include <iostream>
#include<map>
#include <algorithm>
using namespace std;

// void findDisappearedNumbers(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> res;

//         int j = 0;
//         for(int i = 1; i <= nums.size(); i++) {
//             while(j < nums.size() && nums[j] < i) {
//                 j++;
//             }
//             if(j >= nums.size() || nums[j] != i) {
//                 res.push_back(i);
//             }
//         }
//         for(auto x:res) cout<<x<<" ";

//     }

// void missingNum(vector<int> &arr){
//     unordered_map<int,int> mp;
//     for(auto x:arr){
//         mp[x]++;
//     }
//     for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
//     vector<int> ans;
//     for(int i = 1;i<=arr.size();i++){
//         if(mp[i]==0){
//             ans.push_back(i);
//         }
//     }
//     cout<<endl<<endl;
//     for(auto x:ans) cout<<x<<" ";
//     cout<<endl;
// }



void reverseStr(const string &y){
    vector<string> b;
    string word;
    for(auto ch:y){
        if(ch!=' '){
            word.push_back(ch);
        }else if(!word.empty()){
            b.push_back(word);
            word.clear();
        }
    }
    if(!word.empty()){
        b.push_back(word);
    }
    for(auto &x:b){
        reverse(x.begin(),x.end());
    }
    for(auto x:b) cout<<x<<" ";
}

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
    }return false;
}

int main() {
    // vector<int> arr = {4,3,2,7,8,2,3,1};
    // //findDisappearedNumbers(arr);
    //missingNum(arr);
    //cout<<(3/2)<<endl;
    
    // string pangram = "The quick brown fox jumps over the lazy dog";
    // reverseStr(pangram);
    
    char a = toLower('U');
    cout<<a<<endl;
    bool is = isVowel(a);
    is==true?cout<<"Vowel"<<endl:cout<<"Not Vowel"<<endl;
    return 0;
}
