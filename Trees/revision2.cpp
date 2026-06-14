#include <iostream>
#include "revision.cpp"
using namespace std;

void zigZag(TreeNode* root){
     queue<TreeNode*> q;
     q.push(root);
     q.push(NULL);
     vector<vector<int>> ans;
     vector<int> x;
     while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp==NULL){
            ans.push_back(x);
            x.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            x.push_back({temp->data});
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
     }
     for(int i=0;i<ans.size();i++){
        int start=0;
        int end=ans[i].size()-1;
        while(start<=end){
            swap(ans[i][start],ans[i][end]);
            start++;
            end--;
        }
    }
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

void leftTraversal(TreeNode* root,vector<int> &ans){
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return;
    }
    ans.push_back(root->data);
    if(root->left) leftTraversal(root->left,ans);
    else leftTraversal(root->right,ans);
}

void leafTraversal(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    leafTraversal(root->left,ans);
    leafTraversal(root->right,ans);
}

void rightTraversal(TreeNode* root,vector<int> &ans){
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return;
    }
    if(root->right) rightTraversal(root->right,ans);
    else rightTraversal(root->left,ans);
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    //left part
    leftTraversal(root->left,ans);
    //leaf nodes
    leafTraversal(root->left,ans);
    leafTraversal(root->right,ans);
    //right part
    rightTraversal(root->right,ans);
    return ans;
}

int main() {
    TreeNode* n1=buildTree(n1);
    //zigZag(n1);
    levelOrderTraversalImpv(n1);
    vector<int> result = boundaryTraversal(n1);
    for(auto x:result) cout<<x<<" ";
    cout<<endl;
    return 0;
}
