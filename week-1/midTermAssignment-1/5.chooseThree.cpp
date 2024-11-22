#include<bits/stdc++.h>
using namespace std;

int main() {
   
 int T;
    cin >> T;
    for(int m = 0; m < T; m++){
        int N,T;
        cin >> N >> T;
        int A[N];
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        sort(A,A+N);
        int count = 0;
        for(int i = 0; i < N-1; i++){
          for(int j = i+1; j < N; j++){
    for(int k = j+1; k < N; k++){
                    
                    if(A[i]+A[j]+A[k] == T){
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