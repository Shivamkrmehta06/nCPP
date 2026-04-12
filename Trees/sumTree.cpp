#include <iostream>
#include "binaryTree.cpp"
using namespace std;

pair<bool,int> sumTree(TreeNode* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    if(root->left == NULL&&root->right == NULL){
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }
    pair<bool,int> leftAns = sumTree(root->left);
    pair<bool,int> rightAns = sumTree(root->right);
    bool left = leftAns.first;
    bool right = rightAns.first;
    bool op = (leftAns.second+rightAns.second)==root->data;
    pair<bool,int> ans;
    if(left&&right&&op){
        ans.first = true;
        ans.second = 2*root->data;
    }else{
        ans.first = false;
        ans.second = 0;
    }
    return ans;
}

int main() {
    TreeNode* n1=NULL;
    n1 = buildTree(n1);
    levelOrderImpv(n1);
    pair<bool,int> ans = sumTree(n1);
    (ans.first==true)?cout<<"SumTree"<<endl:cout<<"Not SumTree"<<endl;
    return 0;
}
