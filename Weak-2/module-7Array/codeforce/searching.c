// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
int main() {
    // Write C code here
  long long  int N;
  
    scanf("%lld",&N);
    long long int arr[N];
   
    for (long long int i =0;i<N;i++){
        scanf("%lld",&arr[i]);
        // printf("%lld\n",arr[i]);
    }
    printf("Now print the num\n");
    long long int X;
    scanf("%lld",&X);
     for (long long int i =0;i<N;i++){
       printf("aarr %lld\n",arr[i]);
       if(arr[i]==X) {
         printf("%lld\n",i);
       }
       else{
           printf("not matched the %lld\n",i);
       }
    }
    
  
    

    return 0;
}