#include<iostream>
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
    TreeNode* buildTree(){
        cout<<"Enter the root node: "<<endl;
        int data; 
        cin>>data;
        if(data==-1) return NULL;
        TreeNode* root = new TreeNode(data);
        cout<<"Enter the left node of the data "<<data<<endl;
        root->left = buildTree();
        cout<<"Enter the right node of the data "<<data<<endl;
        root->right = buildTree();
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
                }if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
};

/* int main(){
    TreeNode* n4 = NULL;
    TreeNode shi(0);
    n4 = shi.buildTree();
    shi.levelOrder(n4);
} */