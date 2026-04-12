#include <iostream>
#include "binaryTree.cpp"
using namespace std;

//height of a tree

int height(TreeNode* root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1;
    return ans;
}

void levelOrder_(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}


int main() {
    TreeNode* n1;
    n1 = buildTree(n1);
    int ans = height(n1);
    cout<<"Height of Tree "<<ans<<endl;
    
    levelOrder_(n1);

    return 0;
}
