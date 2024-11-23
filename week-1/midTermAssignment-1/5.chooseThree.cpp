#include<bits/stdc++.h>
using namespace std;

int main() {
   
 int T;
    cin >> T;
    for(int m = 0; m < T; m++){
        int N,T;
        cin >> N >> T;
        int Array[N];
        for(int in = 0; in < N; in++){
            cin >> Array[in];
        }
        sort(Array,Array+N);
        int count = 0;
    for(int i = 0; i < N-1; i++){
      for(int j = i+1; j < N; j++){
        for(int k = j+1; k < N; k++){
    if(Array[i]+Array[j]+Array[k] == T){
      count++;
    }
            
                }
            }
        }
        if(count > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}