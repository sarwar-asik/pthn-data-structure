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

Node* convert_to_BST(int arr[],int n, int l,int r){
    if(l>r) return NULL;
    int mid= (l+r)/2;
    Node * root = new Node(arr[mid]);
    
    Node* left_root =convert_to_BST(arr,n,l,mid-1);
    Node* right_root =convert_to_BST(arr,n,mid+1,r);
    
    root->left= left_root;
    root->right= right_root;

    return root;

}
int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        // cout << arr[i] << " ";
    }


    Node* root =convert_to_BST(arr,n,0,n-1);  //! array, size, start, end

    levelOrder(root);
    return 0;
}