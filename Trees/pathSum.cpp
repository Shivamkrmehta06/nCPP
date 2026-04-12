#include <iostream>
#include "binaryTree_.cpp"
using namespace std;

bool pathSum(TreeNode* root,int target,int sum){
    if(root==NULL) return false;
    sum += root->data;
    if(root->left==NULL&&root->right==NULL){
        if(sum==target){
            return true;
        }
    }
    bool leftAns = pathSum(root->left,target,sum);
    bool rightAns = pathSum(root->right,target,sum);
    return (leftAns||rightAns);
}

int main() {
    
    return 0;
}
