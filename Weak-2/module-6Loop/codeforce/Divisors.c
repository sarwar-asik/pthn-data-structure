// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

int main() {
    // Write C code here
   
    long long int N;
     scanf("%lld",&N);
     for(long long int i =1; i<=N;i++){
         if(N%i==0){
             printf("%lld\n",i);
         }
     }
    

    return 0;
}