// Codeium: Disable Autocomplete
#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    long long N,M;
    cin >> N;
     vector <long long>CombArr(N);
    vector<long long>A(N);
   
    for(int i=0; i<N; i++){
        cin >> A[i];
        CombArr[i]  =A[i];
    }
    cin >> M;
    vector<long long>B(M);
     
    for(int i=0; i<M; i++){
       
        cin >> B[i];
         
    }
    long long X;
    cin>> X;
    // 
    CombArr.resize(N+M);
    // vector <long long>CombArr(N+M);

    for(int i=0; i<N+M; i++){
        if(i>=X && i <X+M){
            CombArr[i]=B[i-X];
        }
        else{
            // CombArr[i]=99;
            // total = 
            // CombArr[i]=A[i-M];
            // cout<<" /"<<i<<"/ ";
            if(i>=M ){
                if(X==0){
                     CombArr[i]=A[i-M]; 
                }else{
                     CombArr[i]=A[i-X]; 
                
                }
                // CombArr[i]=0;
                //  CombArr[i]=A[i-X]; 
            
            }else{
                CombArr[i]=A[i];
                // CombArr[i]=0;
            }
            
        }

        //   if(i>=X && i <X+i){
        //     CombArr[i]=B[0];
        //   }
        //   else{
        //     CombArr[i]=A[i];
        //   }
        //   cout << CombArr[i] << ":"<<i<<" ";
        cout<<CombArr[i]<<" ";
    }



    // 1 2 3 4 5 6 7 8    //10 20 30   // 3
    //! 1 2 3 10 20 30 4 5 6 7 8 (4-7)
    
    //3 => //! (3-5)
    //4 => //! (4-6  
    // 5 => //! (5-7)
    // 0 => //! (0-2)
    
    return 0;
}