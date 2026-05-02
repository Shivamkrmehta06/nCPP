#include <iostream>
#include "binaryTree.cpp"
using namespace std;

void solve(TreeNode* root,int sum,int &maxSum,int len,int &maxLen){
    if(root==NULL){
        if(len>maxLen){
            maxLen = len;
            maxSum = sum;
        }else if(len==maxLen){
            maxSum = max(sum,maxSum);
        }
        return;
    }
    sum += root->data;
    solve(root->left,sum,maxSum,len,maxLen);
    solve(root->right,sum,maxSum,len,maxLen);
}

int sumOfLongestPath(TreeNode* root){
    int len=0,maxLen=0,sum=0,maxSum=0;
    solve(root,sum,maxSum,len,maxLen);
    return maxSum;
}

int main() {
    TreeNode* n1;
    n1 = buildTree(n1);
    levelOrderImpv(n1);
    int ans = sumOfLongestPath(n1);
    cout<<"Sum of Longest Path: "<<ans<<endl;
    return 0;
}
