#include <iostream>
#include "binarySearchTree.cpp"
using namespace std;

int kthSmallest(TreeNode* root,int &i,int k){
    if(root==NULL) return -1;
    int left = kthSmallest(root->left,i,k);
    if(left!=-1){
        return left;
    }
    i++;
    if(i==k) return root->data;
    return kthSmallest(root->right,i,k);
}

void NON(TreeNode* root,int &i){
    if(root==NULL) return ;
    NON(root->left,i);
    i++;
    NON(root->right,i);
}

int kthLargest(TreeNode* root,int k){
    int n = 0; 
    NON(root,n);
    int target = (n-k)+1;
    int ni = 0;
    int ans = kthSmallest(root,ni,target);
    return ans;
}

int main() {
    TreeNode* n1 = takeInput();
    levelOrderImpv(n1);
    int i = 0;
    int ans = kthSmallest(n1,i,2);
    cout<<"2nd Smallest Element: "<<ans<<endl;
    int ton = 0;
    NON(n1,ton);
    cout<<"Total number of nodes: "<<ton<<endl;
    int max = kthLargest(n1,1);
    cout<<"2nd Largest Element: "<<max<<endl;
    return 0;
}
