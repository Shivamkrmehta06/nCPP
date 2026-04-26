#include <iostream>
using namespace std;

// Print 1 to N

void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}

void printX(int n){
    if(n==0) return;
    cout<<n<<endl;
    printX(n-1);
}

// Sum of N numbers

int sum(int x){
    if(x==0) return 0;
    int ans = x+sum(x-1);
    return ans;
}

// Reverse an array using recursion

void revArr(int *arr,int n){
    if(n==-1) return;
    cout<<arr[n]<<" ";
    revArr(arr,n-1);
}

void revArr2(int *arr,int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    revArr2(arr,i+1,j-1);
}

bool pallindrome(string s,int i,int j){
    if(i>=j) return true;
    if(s[i]!=s[j]){
        return false;
    };
    return pallindrome(s,i+1,j-1);
}

int main() {
    int arr[] = {1,2,3};
    //revArr(arr,2);
    // revArr2(arr,0,2);
    // for(auto x:arr) cout<<x<<" ";
    string s = "dad";
    bool sa = pallindrome(s,0,s.length()-1);
    if(sa) cout<<"Pallindrome"<<endl;
    else cout<<"Not a Pallindrome"<<endl;
    return 0;
}
