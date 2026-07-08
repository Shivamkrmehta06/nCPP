#include <iostream>
#include "binaryTree.cpp"
using namespace std;

// lets create a binary search tree
TreeNode* insertInBST(TreeNode* root,int data){
    if(root==NULL){
        root = new TreeNode(data);
        return root;
    }
    if(data>root->data){
        root->right = insertInBST(root->right,data);
    }else{
        root->left = insertInBST(root->left,data);
    }
    return root;
}

TreeNode* takeInput(){
    TreeNode* root = NULL;
    int data;
    cin>>data;
    while(data!=-1){
        root = insertInBST(root,data);
        cin>>data;
    }
    return root;
}

void levelOrderX(TreeNode* root){
    if(root==NULL) return;
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

TreeNode* minVal(TreeNode* root){
    TreeNode* temp = root;
    while(temp!=NULL){
        temp = temp->left;
    }
    return temp;
}

TreeNode* deleteNode(TreeNode* root,int data){
    if(root==NULL) return NULL;
    if(root->data == data){
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }

        if(root->left!=NULL&&root->right==NULL){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        if(root->right==NULL&&root->right!=NULL){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        if(root->left!=NULL&&root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right,mini);
            return root;
        }
    }
    if(root->data>data){
        root->left = deleteNode(root->left,data);
    }else{
        root->right = deleteNode(root->right,data);
    }
    return root;
}

// 30 27 35 21 29 32 40 -1

// Lowest Common Ancestor

TreeNode* lca(TreeNode* root,int k1,int k2){
    if(root==NULL) return NULL;
    if(root->data==k1||root->data==k2){
        return root;
    }
    TreeNode* left = lca(root->left,k1,k2);
    TreeNode* right = lca(root->right,k1,k2);
    if(root->left!=NULL&&root->right!=NULL) return root;
    else if(root->left!=NULL&&root->right==NULL) return left;
    else if(root->left==NULL&&root->right!=NULL) return right;
    else return NULL;
}

int main() {
    TreeNode* n1=takeInput();
    //levelOrderX(n1);
    TreeNode* lcaaa = lca(n1,32,29);
    cout<<"Lowest Common Ancestor: "<<lcaaa->data<<endl;
    return 0;
}
