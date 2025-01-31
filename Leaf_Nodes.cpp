#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    long long val;
    Node* left;   
    Node* right;  
    Node(long long val){
      this->val=val;
      this->left=NULL;
      this->right=NULL;
    }
};

Node* input_tree(){
    long long val;
    cin>>val;
    Node* root;
    if(val==-1)return NULL;
     else root = new Node(val);

     queue<Node*>q;
     if(root)q.push(root);

     while(!q.empty()){
        Node* p = q.front();
        q.pop();

        long long l,r;
        cin>> l >> r;
        Node *myLeftNode,*myRightNode;
        if(l==-1)myLeftNode =NULL;
         else myLeftNode = new Node(l);
        if(r==-1)myRightNode =NULL;
         else myRightNode = new Node(r);

         p->left = myLeftNode;;
         p->right = myRightNode;

         if(p->left) q.push(p->left);
         if(p->right) q.push(p->right);
     }
     return root;

}


void descending_leaf_nodes(Node* root,vector<long long>&v){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
        // cout<<root->val<<" ";
        return;
    }
    descending_leaf_nodes(root->left,v);
    descending_leaf_nodes(root->right,v);
}                           

int main() {
    
    Node* root = input_tree();

   vector<long long>v;
    descending_leaf_nodes(root,v);
    reverse(v.begin(),v.end());
    for(long long x:v){
        cout<<x<<" ";
    }
    return 0;
}