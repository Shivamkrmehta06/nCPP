#include <iostream>
#include "binaryTree.cpp"
using namespace std;

TreeNode* lca(TreeNode* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->data==n1||root->data==n2){
        return root;
    }
    TreeNode* leftAns = lca(root->left,n1,n2);
    TreeNode* rightAns = lca(root->right,n1,n2);
    if(leftAns!=NULL&&rightAns!=NULL) return root;
    else if(leftAns!=NULL&&rightAns==NULL) return leftAns;
    else if(leftAns==NULL&&rightAns!=NULL) return rightAns;
    else return NULL;
}

int main() {
    TreeNode* n1;
    n1 = buildTree(n1);
    levelOrderImpv(n1);
    TreeNode* lc = lca(n1,21,4);
    cout<<"Lowest Common Ancestor: "<<lc->data<<endl;
    return 0;
}
