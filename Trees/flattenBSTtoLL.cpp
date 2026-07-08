#include <iostream>
#include "binarySearchTree.cpp"
using namespace std;

void inorder(TreeNode* root,vector<TreeNode*> &ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root);
    inorder(root->right,ans);
}

// 30 27 35 21 29 32 40 -1

int main() {
    TreeNode* n2 = takeInput();
    levelOrderImpv(n2);
    vector<TreeNode*> ans;
    inorder(n2,ans);
    for(int i=0;i<ans.size()-1;i++){
        ans[i]->right = ans[i+1];
        ans[i]->left = NULL;
    }
    ans.back()->left = NULL;
    ans.back()->right = NULL;
    TreeNode* head = ans[0];
    while(head){
        cout<<head->data<<" ";
        head = head->right;
    }
    cout<<endl;
    return 0;
}
