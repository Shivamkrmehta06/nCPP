#include <iostream>
#include "binaryTree.cpp"
using namespace std;

bool identicalTree(TreeNode* root,TreeNode* root2){
    if(root==NULL && root2==NULL) return true;
    if(root!=NULL && root2==NULL) return false;
    if(root==NULL && root2!=NULL) return false;
    bool left = identicalTree(root->left,root2->left);
    bool right = identicalTree(root->right,root2->right);
    bool op = (root->data==root2->data);
    if(left&&right&&op) return true;
    return false;
}

int main() {
    TreeNode* n1 = NULL;
    n1 = buildTree(n1);
    levelOrderImpv(n1);
    TreeNode* n2 = NULL;
    n2 = buildTree(n2);
    levelOrderImpv(n2);
    bool isId = identicalTree(n1,n2);
    isId==true?cout<<"Identical Tree"<<endl:cout<<"Not Identical Tree"<<endl;
    return 0;
}
