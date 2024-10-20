// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
int main() {
<<<<<<< HEAD
    // Write C code here
    // printf("Try programiz.pro");
    long int A,B;
    char S;
    scanf("%ld",&A);
    
    scanf(" %c",&S);
    scanf("%ld",&B);
    // printf("\n %ld and  %c and  %ld",A,S,B);
    
    if(S="<" && A<B){
       printf("Right");
    }
    else if(S=">"&&A>B){
        printf("Right");
    }
     else if(S="="&&A==B){
        printf("Right");
    }
    else {
        printf("Wrong");
    }
    
       
=======

    char X;
    scanf("%c",&X);
  
    if(X>=97 && X<=122){
        X=X-32;
        printf("%c",X);
    }
    else{
        X=X+32;
        printf("%c",X);  
    }
    
>>>>>>> 603c349415ae6915a73d70b01e680e1d24b4b951

    return 0;
}