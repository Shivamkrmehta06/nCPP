#include <iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the root Node: "<<endl;
    int data;
    cin>>data;
    root = new TreeNode(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data to left of "<<data<< " Node: "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data to the right of "<<data<<" Node: "<<endl;
    root->right=buildTree(root->right);
    return root;
}

// breadth first search

void levelOrderTraversal(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp=q.front();
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

void levelOrderTraversalImpv(TreeNode* root){
    queue<TreeNode*> q;
    vector<TreeNode*> ans; 
    q.push(root);
    ans.push_back(root);
    ans.push_back(NULL);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            ans.push_back(NULL);
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            ans.push_back(temp);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
        }
    }
    reverse(ans.begin(),ans.end());
    int i=0;
    while(i<ans.size()){
        if(ans[i]==NULL){
            cout<<endl;
            i++;
        }else{
            cout<<ans[i]->data<<" ";
            i++;
        }
    }
}

void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int heightOfTree(TreeNode* root){
    if(root==NULL) return 0;
    int leftTree=heightOfTree(root->left);
    int rightTree=heightOfTree(root->right);
    int ans = max(leftTree,rightTree)+1;
    return ans;
}

pair<int,int> diameterOfTree(TreeNode* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> leftPart=diameterOfTree(root->left);
    pair<int,int> rightPart=diameterOfTree(root->right);
    int op1=leftPart.first;
    int op2=rightPart.first;
    int op3=leftPart.second+rightPart.second+1;
    pair<int,int> ans;
    ans.first = max(op3,max(op1,op2));
    ans.second=max(leftPart.second,rightPart.second)+1;
    return ans;
}

bool balancedTree(TreeNode* root){
    if(root==NULL) return true;
    bool leftPart = balancedTree(root->left);
    bool rightPart = balancedTree(root->right);
    bool diff = abs(heightOfTree(root->right)-heightOfTree(root->left))<=1;
    if(leftPart&&rightPart&&diff){
        return true;
    }else{
        return false;
    }
}

pair<bool,int> balancedTreeFast(TreeNode* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    pair<bool,int> leftPart=balancedTreeFast(root->left);
    pair<bool,int> rightPart=balancedTreeFast(root->right);
    bool diff = abs(leftPart.second-rightPart.second)<=1;
    pair<bool,int> ans;
    if(leftPart.first&&rightPart.first&&diff){
        ans.first = true;
        ans.second = leftPart.second+rightPart.second+1;
    }else{
        ans.first=false;
        ans.second=0;
    }
    return ans;
}

bool identicalTrees(TreeNode* root1,TreeNode* root2){
        if(root1==NULL&&root2==NULL) return true;
        if(root1==NULL&&root2!=NULL) return false;
        if(root1!=NULL&&root2==NULL) return false;
        bool leftPart=identicalTrees(root1->left,root2->left);
        bool rightPart=identicalTrees(root1->right,root2->right);
        bool value=(root1->data==root2->data);
        if(leftPart&&rightPart&&value) return true;
        else return false;
}

pair<bool,int> isSumTree(TreeNode* root){
    if(root==NULL){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }
    if(root->left==NULL&&root->right==NULL){
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int> leftPart=isSumTree(root->left);
    pair<bool,int> rightPart=isSumTree(root->right);
    bool leftAns=leftPart.first;
    bool rightAns=rightPart.first;
    bool cond=(root->data==leftPart.second+rightPart.second);
    pair<bool,int> ans;
    if(leftAns&&rightAns&&cond){
        ans.first=true;
        ans.second=2*root->data;
    }else{
        ans.first=false;
        ans.second=0;
    }
    return ans;
}

// int main() {
//     TreeNode* n1 = buildTree(n1);
    // levelOrderTraversalImpv(n1);
    // inorder(n1);
    // cout<<endl;
    // preorder(n1);
    // cout<<endl;
    // postorder(n1);
    // cout<<endl;

    // int ans=heightOfTree(n1);
    // cout<<"Height of Tree: "<<ans<<endl;

    // pair<int,int> ans = diameterOfTree(n1);
    // cout<<"Diameter: "<<ans.first<<endl<<"Height: "<<ans.second<<endl;

    // bool ans = balancedTree(n1);
    // if(ans) cout<<"Tree is Balanced"<<endl;
    // else cout<<"Tree is not Balanced"<<endl;

    // pair<bool,int> ans = balancedTreeFast(n1);
    // if(ans.first) cout<<"Tree is Balanced"<<endl;
    // else cout<<"Tree is not Balanced"<<endl;

//     pair<bool,int> ans=isSumTree(n1);
//     if(ans.first) cout<<"It's a Sum Tree"<<endl;
//     else cout<<"It's not a Sum Tree"<<endl;

//     return 0;
// }
