#include<bits/stdc++.h>
using namespace std;

int main() {
   


    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int val;
    cin >> val;
    v.push_back(val);

    int current_idx = v.size()-1;


    while (current_idx > 0) //! O{log(n)}
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

    for(int x:v){
        cout << x << " ";
    }
    
   




    return 0;
}