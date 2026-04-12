#include <iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the root node: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new TreeNode(data);
    cout<<"Enter the data to be added into left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to be added into the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(TreeNode* root){
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
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main() {
    TreeNode* n1 = NULL;
    n1 = buildTree(n1);
    levelOrder(n1);
    return 0;
}
