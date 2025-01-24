#include <bits/stdc++.h> 

using namespace std;

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };
int mx;
int max_height(TreeNode<int>*root){
    if(root==NULL) return 0;
    if(root->left ==NULL && root->left ==NULL) return 1;

        int l= max_height(root->left);
        int r = max_height(root->right);
        int d = l+r;
        mx= max(mx,d);
    return max(l,r)+1;
};
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    mx=0;
    int h = max_height(root);
    return mx;
}
