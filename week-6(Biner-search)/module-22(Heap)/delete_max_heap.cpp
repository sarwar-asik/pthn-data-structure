#include<bits/stdc++.h>
using namespace std;


void insert_heap(vector<int>&v,int val){

    v.push_back(val);
    int current_idx = v.size()-1;
     while (current_idx > 0) 
    {
     int parent_idx= (current_idx-1)/2;

    // cout<<"parent_idx: " << parent_idx << endl;
    // cout<<"current_idx: " << current_idx << endl;
    if(v[parent_idx] < v[current_idx]){
        swap(v[parent_idx],v[current_idx]);
    }
    else break;
    current_idx = parent_idx;

    }
}

void print_heap(vector<int>&v){
     for(int x:v){
        cout << x << " ";
    }
    cout << endl;
}

void delete_from_heap(vector<int>&v){
    v[0] =v.back(); //! last value
    // cout << "deleted element: " << v[0] << endl;

    v.pop_back();    

    int current_idx = 0;
   while(current_idx<v.size()){
     int left_idx = current_idx*2+1;
    int right_idx = current_idx*2+2;
    int left_val=INT_MIN,right_val=INT_MIN;

    if(left_idx<v.size()){
        left_val = v[left_idx];
    }
    if(right_idx<v.size()){
        right_val = v[right_idx];
    }

    if(left_val>right_val && left_val>v[current_idx]){
        swap(v[current_idx],v[left_idx]);
        current_idx = left_idx;
    }
    else if(right_val>v[current_idx] && right_val>left_val){
        swap(v[current_idx],v[right_idx]);
        current_idx = right_idx;
    }
    else{
     break;    
    }
   }
   
}
int main() {
   


    vector<int>v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int val;
        cin>> val;
        insert_heap(v,val);
    }


        delete_from_heap(v);    
        delete_from_heap(v);    
        delete_from_heap(v);    
       print_heap(v);
    



    
   




    return 0;
}