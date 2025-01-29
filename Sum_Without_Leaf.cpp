#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/sum-without-leaf
class Node
{
    public:
    int val;
    Node* left;   
    Node* right;  
    Node(int val){
      this->val=val;
      this->left=NULL;
      this->right=NULL;
    }
};
Node* input_tree(){
    int val;
    cin>> val;
    Node* root ;
    if(val==-1) root=NULL;
      else root= new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
       Node* parent = q.front();
       q.pop();

       int l,r;
       cin>>l>>r;
       Node* myleftNode,*myRightNode;
       if(l==-1) myleftNode =NULL;
         else myleftNode= new Node(l);
       
       if(r==-1) myRightNode =NULL;
         else myRightNode = new Node(r);
       
       parent->left = myleftNode;
       parent->right = myRightNode;
       if(parent->left) q.push(parent->left);
       if(parent->right) q.push(parent->right);
    }
    return root;
    
};
int sum_without_leaf(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 0;

    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);
return l+r+root->val;    
};

int main() {
 
    Node* root= input_tree();   
    cout<<sum_without_leaf(root)<<endl;
    
    return 0;
}