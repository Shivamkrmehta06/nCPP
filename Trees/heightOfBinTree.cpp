#include <iostream>
#include "binaryTree.cpp"
using namespace std;

int height(TreeNode* root){
    //base case
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1;
    return ans;
}

int main() {
    TreeNode* n2 = NULL;
    n2 = buildTree(n2);
    int len = height(n2);
    cout<<"Height of Tree: "<<len<<endl;
    postOrder(n2);
    return 0;
}
