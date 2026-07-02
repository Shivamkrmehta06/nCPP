#include <iostream>
#include "binaryTree.cpp"
using namespace std;

TreeNode* binarySearchTree(TreeNode* root,int data){
    if(root==NULL){
        root = new TreeNode(data);
        return root;
    }
    if(root->data<data){
        root->right = binarySearchTree(root->right,data);
    }else{
        root->left = binarySearchTree(root->left,data);
    }
    return root;
}

TreeNode* takeInput(){
    TreeNode* root = NULL;
    int data;
    cin>>data;
    while(data!=-1){
        root = binarySearchTree(root,data);
        cin>>data;
    }
    return root;
}

void lOT(TreeNode* root){
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

TreeNode* searchInBST(TreeNode* root,int target){
    if(root==NULL) return NULL;
    if(root->data==target) return root;
    if(root->data>target){
        return searchInBST(root->left,target);
    }else{
        return searchInBST(root->right,target);
    }
}

// Inorder Binary Search Tree is Sorted

void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}

// TestCase example of BST : 30 27 35 21 29 32 40 -1


// Inorder Predecessor
TreeNode* inPred(TreeNode* root,int target){
    TreeNode* temp = searchInBST(root,target);
    if(temp==NULL) return NULL;
    if(temp->left==NULL) return NULL;
    temp = temp->left;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

// Inorder Successor
TreeNode* inSuccessor(TreeNode* root,int target){
    TreeNode* temp = searchInBST(root,target);
    if(temp==NULL) return NULL;
    if(temp->right==NULL) return NULL;
    temp = temp->right;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

// Deletion in BST
TreeNode* miniValue(TreeNode* root){
    TreeNode* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

TreeNode* deleteNode(TreeNode* root,int target){
    if(root==NULL) return NULL;
    if(root->data==target){
        // for 0 child
        if(root->right==NULL&&root->left==NULL){
            delete root;
            return NULL;
        }
        // for 1 child
        if(root->left!=NULL&&root->right==NULL){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL&&root->right!=NULL){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        // for 2 child
        if(root->left!=NULL&&root->right!=NULL){
            int mini = miniValue(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right,mini);
            return root;
        }

    }else if(root->data>target){
        root->left =  deleteNode(root->left,target);
    }else{
        root->right =  deleteNode(root->right,target);
    }
    return root;
}


int main() {
    TreeNode* n1= takeInput();
    //lOT(n1);
    // int x = 40;
    // TreeNode* ans = searchInBST(n1,x);
    // ans!=NULL?cout<<ans->data<<" element found"<<endl:cout<<"Element Not Found"<<endl;
    inorder(n1);
    //TreeNode* ans = inPred(n1,35);
    TreeNode* ans = inSuccessor(n1,29);
    cout<<endl<<"Predecessor: "<<ans->data<<endl;
    return 0;
}
    