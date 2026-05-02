#include <iostream>
#include "binaryTree.cpp"
using namespace std;

void solve(TreeNode* root,int k,int &count,vector<int> path){
    if(root==NULL) return;
    path.push_back(root->data);
    solve(root->left,k,count,path);
    solve(root->right,k,count,path);
    int size = path.size();
    int sum = 0;
    for(int i = size-1;i>=0;i--){
        sum += path[i];
        if(sum==k){
            count++;
        }
        path.pop_back();
    }
}

int sum(TreeNode *root,int k){
    vector<int> path;
    int count = 0;
    solve(root,k,count,path);
    return count;
}

int main() {
    TreeNode* n1;
    n1=buildTree(n1);
    levelOrderImpv(n1);
    int ans=sum(n1,5);
    cout<<"K sum paths: "<<ans<<endl;
    return 0;
}
