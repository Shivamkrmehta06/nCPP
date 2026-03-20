#include <iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->val = data;
        this->right = NULL;
        this->left = NULL;
    }
};
TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;

        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    } 

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }

int main() {
    
    return 0;
}
