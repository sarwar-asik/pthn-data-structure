// ! Height: leaf= 0 , root= height
// ! Depth: leaf=depth, leaf = 0

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

int max_height(Node* root){
    if(root==NULL)return 1;

    if(root->left==NULL && root->right==NULL) return 1; // found leaf node


    int left_max= max_height(root->left);
    int right_max = max_height(root->right);
    return max(left_max,right_max)+1; /// 0 for count own height

};

int count_node(Node* root){
    if(root==NULL) return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;

};


int main() {
    // main code here

    Node* root= input_tree();
    // bool is_perfect= true;
    // levelOrder(root);

    // cout<< "max_height = "<<max_height(root)<<endl;
    // cout << "total= "<<max_height(root->left)+max_height(root->right)<<endl;
    // is_perfect = max_height(root)==max_height(root->left)+max_height(root->right);
    // cout << pow(2,max_height(root))-1 <<endl;
    // cout <<"total node"<< count_node(root)<<endl;

    if( pow(2,max_height(root))-1 == count_node(root)) {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    return 0;
}   