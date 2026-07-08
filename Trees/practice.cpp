#include <iostream>
#include "binaryTree.cpp"
using namespace std;

// L N R
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// L R N
void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);    
    cout<<root->data<<" ";
}

// N L R
void preorder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    TreeNode* n1 = buildTree(n1);
    levelOrderImpv(n1);
    inorder(n1);
    cout<<endl;
    preorder(n1);
    cout<<endl;
    postorder(n1);
    cout<<endl;
    return 0;
}
