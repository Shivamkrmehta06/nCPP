#include <iostream>
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
    cout<<"Enter the data: "<<endl;
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    root = new TreeNode(d);
    cout<<"Enter the data to left of root "<<d<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to right of root "<<d<<endl;
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
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

//height of the tree

int height(TreeNode* root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1; 
    return ans;
}

// diameter of the tree(Longest path between the two nodes of a tree)

pair<int,int> diameter(TreeNode* root){
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameter(root->left);
    pair<int,int> right = diameter(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second+right.second+1;
    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;
    return ans;
}

// check whether the tree is balanced or not

bool isBalanced(TreeNode* root){
    if(root==NULL) return true;
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool condi = abs(height(root->left)-height(root->right))<=1;
    if(left&&right&&condi) return true;
    else return false;
}

// zig zag traversal

vector<int> zigZag(TreeNode* root){
    vector<int> result;
    if(root==NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = false;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i = 0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();
            int index = leftToRight?i:size-i-1;
            ans[index] = temp->data;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        leftToRight = !leftToRight;
        for(auto x:ans){
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    TreeNode* n1 = buildTree(n1);
    levelOrder(n1);
    int he = height(n1);
    cout<<"Height of the Tree is: "<<he<<endl;
    pair<int,int> a = diameter(n1);
    cout<<"Diameter: "<<a.first<<endl<<"Height: "<<a.second<<endl;
    bool isB = isBalanced(n1);
    isB==true?cout<<"Balanced Tree"<<endl:cout<<"Unbalanced Tree"<<endl;
    vector<int> st = zigZag(n1);
    for(auto x:st) cout<<x<<" ";
    return 0;
}
