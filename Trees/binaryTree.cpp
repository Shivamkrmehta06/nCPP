#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the root Node: "<<endl;
    int data;
    cin>>data;
    root = new TreeNode(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to be inserted in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to be inserted in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
         TreeNode* temp = q.front();
         cout<<temp->data<<" ";
         q.pop();
         if(temp->left){
            q.push(temp->left);
         }
         if(temp->right){
            q.push(temp->right);    
         }
    }
}

void levelOrderImpv(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void postOrder(TreeNode* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

#ifdef RUN_BINARY_TREE_DEMO
int main() {
    TreeNode* n1 = NULL;
    n1 = buildTree(n1);
    levelOrderImpv(n1);
    return 0;
}
#endif
