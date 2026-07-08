#include <iostream>
#include "binarySearchTree.cpp"
using namespace std;

bool validate(TreeNode* root,int max,int min){
    if(root==NULL) return true;
    if(root->data<min||root->data>max){
        return false;
    }
    bool left = validate(root->left,root->data,min);
    bool right = validate(root->right,max,root->data);
    return left&&right;
}

int main() {
    TreeNode* n1 = takeInput();
    levelOrderImpv(n1);
    bool ans = validate(n1,INT_MAX,INT_MIN);
    ans==true?cout<<"BST"<<endl:cout<<"Not a BST"<<endl;
    return 0;
}
