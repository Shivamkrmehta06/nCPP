#include <iostream>
#include "binaryTree.cpp"
using namespace std;

vector<int> zigZag(TreeNode* root){
    vector<int> result;
    if(root==NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i = 0;i<size;i++){
            TreeNode* front = q.front();
            q.pop();
            int index = leftToRight?i:size-i-1;
            ans[index] = front->data;
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        leftToRight = !leftToRight;
        for(auto x:ans){
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    TreeNode* n1 = NULL;
    n1 = buildTree(n1);
    vector<int> ans = zigZag(n1);
    for(auto x:ans) cout<<x<<" ";
    return 0;
}
