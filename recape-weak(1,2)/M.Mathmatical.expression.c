// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W


//! 2 * 10 = 19
// 20
//! 3 - 1 = 2
// Yes

int main() {
    // Write C code here
    long long int A,B,C;
    char S,Q;
    scanf("%lld",&A);
    scanf(" %c",&S);
    scanf("%lld",&B);
    scanf(" %c",&Q);
    scanf("%lld",&C);
    
    if(S == '+' && A+B==C){
        printf("Yes");
    }
   
    else if( S== '-'&& A-B==C){
           printf("Yes");
    }
   
    else if( S== '*'&& A*B==C){
           printf("Yes");
    }
    
    else {
          
    if(S=='+'){
     long long int Sum= A+B;
        printf("%lld",Sum);
    }
       else if(S=='-'){
          long long int Sum= A-B;
        printf("%lld",Sum);
    }
    
       else if(S=='*'){
        long long int Sum= A*B;
        printf("%lld",Sum);
    }
    
    }


    return 0;
}