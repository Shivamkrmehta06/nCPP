#include <iostream>
#include "binaryTree.cpp"
using namespace std;

int height(TreeNode* root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1;
    return ans;
}

int diameterOfTree(TreeNode* root){
    if(root==NULL) return 0;
    int left = diameterOfTree(root->left);
    int right = diameterOfTree(root->right);
    int op = height(root->left)+height(root->right);
    int ans = max(left,max(right,op));
    return ans;
}

pair<int,int> diameterFirst(TreeNode* root){
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameterFirst(root->left);
    pair<int,int> right = diameterFirst(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second+right.second+1;
    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;
    return ans;
}

int main() {
    TreeNode* n1;
    n1 = buildTree(n1);
    // int ans = diameterOfTree(n1);
    int hei = height(n1);
    levelOrderImpv(n1);
    cout<<"Height of Tree: "<<hei<<endl;
    // cout<<"Diameter of Tree: "<<ans<<endl;
    
    pair<int,int> ans = diameterFirst(n1);
    cout<<endl<<endl;
    cout<<"Diameter: "<<ans.first<<endl;
    cout<<"Height: "<<ans.second<<endl;

    return 0;
}
