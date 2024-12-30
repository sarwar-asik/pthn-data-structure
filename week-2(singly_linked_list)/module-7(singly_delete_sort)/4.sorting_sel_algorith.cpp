#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node(int val){
      this->val=val;
      this->next=NULL;
    }
};
int main() {
    // main code here
    int n ;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i =0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            // ! ascending order
        //    if(a[i]>a[j]){
        //      swap(a[i],a[j]);
        //    }

        //! descending order
         if(a[i]<a[j]){
             swap(a[i],a[j]);
           }
        }
    }

  for(int i=0;i<n;i++){
        cout <<" "<< a[i];
    }


    return 0;
}