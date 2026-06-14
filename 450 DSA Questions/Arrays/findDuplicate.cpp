#include <iostream>
using namespace std;

int dupnum(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(true){
        if(arr[start]==arr[end]){
            return arr[end];
            break;
        }if(start==end){
            start++;
            end=arr.size()-1;
        }
        end--;
    }
}

int main() {
    vector<int> a={1,3,4,2,2};
    int ans=dupnum(a);
    cout<<"Answer: "<<ans<<endl;
    return 0;
}
