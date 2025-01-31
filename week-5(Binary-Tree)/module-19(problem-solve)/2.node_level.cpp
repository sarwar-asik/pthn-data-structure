#include <bits/stdc++.h> 
using namespace std;
// https://www.naukri.com/code360/problems/node-level_920383
    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode <int>*,int>>q1;
    if(root){
        q1.push({root,1});
    }
    while(!q1.empty()){
        pair<TreeNode<int>*,int> parent = q1.front();
        q1.pop();
        TreeNode<int>* node= parent.first;
        int level = parent.second;
        if(node->val ==searchedValue){
            return level;
        }

        if(node->left) q1.push({node->left, level+1});
         if(node->right) q1.push({node->right, level+1});

    }



}
