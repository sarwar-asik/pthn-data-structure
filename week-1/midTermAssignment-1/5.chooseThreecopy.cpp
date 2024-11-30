#include<bits/stdc++.h>
using namespace std;

int main() {
   
 int T;
 cin >> T;
 // 5 time 
 for(int m =0;m<T;m++){
    int N,S;
    cin >> N >> S;
    // 5
    int Array[N];
    for(int input =0;input<N;input++){
        cin>>Array[input];
     // 0 1 2 3 4
    }
    int sum =0;
    for(int i=0;i<N-1;i++){
        // 0 1 2 3
        for(int j=i+1;j<N;j++){
          // 1 2 3 4
            for(int k=j+1;k<N;k++){
          // 2 3 4
                if(Array[i]+Array[j]+Array[k]==S){
                    sum++;
                }
            }
        }
    }

    if(sum>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }




    
    

 }
  
    return 0;
}