
#include<bits/stdc++.h>
using namespace std;

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
    cin>>val;

    Node* root ;

    if(val==-1) root =NULL;
    else root =new Node(val);
    queue<Node*>q;
   
   if(root) q.push(root);

    while (!q.empty())
    {
        //1- ber kore ana 
       Node* parent = q.front();
       q.pop();

       // 2. oi node nia kaj kora

       int l,r;
       cin>>l>>r;
     
     Node* myleftNode,*myRightNode;
    if(l==-1) myleftNode =NULL;
      else myleftNode = new Node(l);
    if(r==-1) myRightNode =NULL;
      else myRightNode = new Node(r);

      parent->left = myleftNode;
      parent->right = myRightNode;


    //3. children a push kora
       if(parent->left)
           q.push(parent->left);
       if(parent->right)
           q.push(parent->right);


    }

    return root;
    
};

int levelOrder(Node* root){
    int count=0; ///! count
    if(root==NULL) {
        cout<<"empty tree";
        return count;
    };
    queue<Node*>q;
   
   q.push(root);
    while(!q.empty()){
        Node*f = q.front();
        q.pop();

        cout << f->val << " ";
        count++;

       if(f->left) q.push(f->left);
       if(f->right) q.push(f->right);
    }
    return count; //! count
};

int count_node(Node* root){
    if(root==NULL) return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;

};

//! input :: 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
//! output:: 10 20 30 40 50 60 length= 6
//          count= 6
int main() {
    // main code here

    Node* root= input_tree();
   int count = levelOrder(root);
    cout<<"length= " << count << endl;

    int count2 = count_node(root);
    cout<<"count= " << count2 << endl;
    return 0;
}