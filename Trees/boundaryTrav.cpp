#include <iostream>
#include "binaryTree.cpp"
using namespace std;

void traverseLeft(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) return;
    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left,ans);
    }else{
        traverseLeft(root->right,ans);
    }
}

void traverseLeaf(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}

void traverseRight(TreeNode* root,vector<int> &ans){
    if(root==NULL||(root->left==NULL&&root->right==NULL)) return;
    if(root->right) traverseRight(root->right,ans);
    else traverseRight(root->left,ans);
    ans.push_back(root->data);
}

vector<int> boundaryTrav(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    //left part store
    traverseLeft(root->left,ans);
    //traverse leaf nodes
    //left subtree
    traverseLeaf(root->left,ans);
    //right subtree
    traverseLeaf(root->right,ans);
    //traverse right part
    traverseRight(root->right,ans);
    return ans;
}

int main() {
    TreeNode* n1 = buildTree(n1);
    levelOrderImpv(n1);
    vector<int> ans = boundaryTrav(n1);
    for(auto x:ans) cout<<x<<" ";
    return 0;
}
