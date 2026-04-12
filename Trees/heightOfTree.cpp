#include <iostream>
#include "binaryTreeStruct.cpp"
using namespace std;

int height(TreeNode* root){
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1;
    return ans;
}

pair<int,int> count(TreeNode* root){
    if(root==NULL) return make_pair(0,0);
    pair<int,int> le = count(root->left);
    pair<int,int> ri = count(root->right);
    int left = le.first+le.second+(root->left?1:0);
    int right = ri.first+ri.second+(root->right?1:0);
    return make_pair(left,right);
}

int main() {
    TreeNode* n5;
    TreeNode m1(0);
    n5 = m1.buildTree();
    m1.levelOrder(n5);

    int result = height(n5);
    cout<<"Height of the Tree: "<<result<<endl;
    return 0;
}
