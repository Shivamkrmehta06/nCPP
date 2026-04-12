#include <iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->data = val;
        this->right = NULL;
        this->left = NULL;
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
    cout<<"Enter the data to be inserted in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to be inserted in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTrav(TreeNode* root){
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
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main() {
    // TreeNode* n3 = buildTree(n3);
    // levelOrderTrav(n3);
    return 0;
}
