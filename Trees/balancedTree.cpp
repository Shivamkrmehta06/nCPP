#include <iostream>
#include "binaryTree.cpp"
using namespace std;

int heightOfBT(TreeNode* root){
    if(root==NULL) return;
    int left = heightOfBT(root->left);
    int right=heightOfBT(root->right);
    int ans = max(left,right)+1;
}

bool isBalanced(TreeNode* root){
    if(root==NULL) return true;
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = abs(heightOfBT(root->left)-heightOfBT(root->right))<=1;
    if(left&&right&&diff) return true;
    else return false;
}

pair<bool,int> isBalancedFast(TreeNode* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    pair<bool,int> left = isBalancedFast(root->left);
    pair<bool,int> right = isBalancedFast(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diff = abs(left.second-right.second)<=1;
    pair<bool,int> ans;
    ans.second = max(left.second,right.second)+1;
    if(leftAns&&rightAns&&diff){
        ans.first = true;
    }else{
        ans.first = false;
    }return ans;
}

bool isBalancedFE(TreeNode* root){
    return isBalancedFast(root).first;
}

int main() {
     
    return 0;
}
