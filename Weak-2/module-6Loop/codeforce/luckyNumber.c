#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
int main() {
    // Write C code here
   
     long int N;
     scanf("%ld",&N);
     long int first = N/10;
     long int second = N%10;
    //  printf("first %ld second %ld",first,second);
     if((first%second==0)|| (second%first==0)){
         printf("Yes\n");
     }else{
         printf("No\n");
     }
     

    return 0;
}