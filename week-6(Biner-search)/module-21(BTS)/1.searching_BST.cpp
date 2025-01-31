#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int val;
    Node* left;   // pointer of the left address
    Node* right;   // pointer of the right address
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

bool searchValue(Node*root,int target){
    if(root==NULL) return false;
    if(root->val==target) return true;

    if(root->val  == target) return true;
    else if(root->val > target)
     return searchValue(root->left,target);
    else 
     return searchValue(root->right,target);
}

//! input :: 20 10 30 5 15 25 40 -1 -1 -1 -1 -1 -1 35 50 -1 -1 -1 -1
// 25
// ! output :: Found
int main() {
   
    // cout<<"Enter the number of elements in the tree : ";
   Node* root = input_tree();

   int val;
   cin>>val;

   bool ans = searchValue(root,val); //! O(h)
//    cout<<ans<<endl;
  if(ans)cout <<"Found\n";
   else cout<<"Not found\n";

    return 0;
}