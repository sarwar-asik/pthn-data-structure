
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

void levelOrder(Node* root){
    if(root==NULL) {
        cout<<"empty tree";
        return;
    };
    queue<Node*>q;
   
   q.push(root);
    while(!q.empty()){
        Node*f = q.front();
        q.pop();

        cout << f->val << " ";

       if(f->left) q.push(f->left);
       if(f->right) q.push(f->right);
    }
};

void insert(Node* &root,int new_val){

 if (root== NULL) {   //! base case
    root = new Node(new_val);  
 }

 if(root->val > new_val){
    if(root->left == NULL){
        root->left= new Node(new_val);
    }
    else insert(root->left,new_val);
 }
 else {

    if(root->right== NULL){
        root->right= new Node(new_val);
    }
    else insert(root->right,new_val);

 }

}

// ! input :: 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
//  20
// ! output :: 10 6 23 9 19 29 7 12 20 35 
int main() {
   
   Node* root = input_tree();
//    insert(root,20);
//    insert(root,50);
   int val;
   cin>>val;
   insert(root,val);
   levelOrder(root);

    return 0;
}