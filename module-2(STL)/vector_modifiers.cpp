#include<bits/stdc++.h>
using namespace std;

int main() {


    vector<int> v={1,2,3,4,5};
    vector<int> v2;

    v2=v;


    for(int i= 0; i < v2.size();i++){
        cout<<v2[i]<<" ";
    }


//  insert
    v.insert(v.begin()+2,100);

    replace(v.begin(),v.end(),4,100);

    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }

    // ! iterator

    // auto it = find(v.begin(),v.end());
    cout<<endl;
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
    
    return 0;
}