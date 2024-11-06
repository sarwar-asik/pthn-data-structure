# include<stdio.h>


long long int factFunc(int n){
    if(n==0){
        return 1;
    }
     return n * factFunc(n-1);
}


int main(){

    int n;

    scanf("%d",&n);

    int fact = factFunc(n);
    printf("%lld",fact);

    return 0;
}