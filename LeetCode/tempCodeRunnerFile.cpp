g namespace std;

void reRotate(vector<int> &arr,int k){
    vector<int> ans(arr.size());
    for(int i = 0;i<arr.size();i++){
        ans[(i+k)%arr.size()] = arr[i];
    }
    for(auto x:ans) cout<<x<<" ";
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    reRotate(arr,3);
    return 0;
}
