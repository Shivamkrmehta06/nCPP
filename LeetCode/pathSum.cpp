bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            return targetSum == root->val;
        }
        bool left = hasPathSum(root->left,targetSum-root->val);
        bool right = hasPathSum(root->right,targetSum-root->val);
        if(left||right) return true;
        else return false;
    }