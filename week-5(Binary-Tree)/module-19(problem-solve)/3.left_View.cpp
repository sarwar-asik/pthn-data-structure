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

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    bool fre[3005]= {false};
       queue<pair<TreeNode <int>*,int>>q1;
    if(root)q1.push({root,1});


    while(!q1.empty()){
        pair<TreeNode<int>*,int> parent = q1.front();
        q1.pop();
        TreeNode<int>* node= parent.first;
        int level = parent.second;

       if(fre[level]==false){
           ans.push_back(node->data);
           fre[level] =true;
       }

        if(node->left) q1.push({node->left, level+1});
         if(node->right) q1.push({node->right, level+1});

    }

    return ans;
}