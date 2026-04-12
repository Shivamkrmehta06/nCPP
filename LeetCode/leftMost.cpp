class Solution {
private:
    void levelOrder(TreeNode* root,vector<vector<int>> &ans){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(level);
        }
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans);
        for(int i=0;i<ans.size();i++){
            for(int j = 0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<",";           
        }
        return ans.back()[0];
    }
};