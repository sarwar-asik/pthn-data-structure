// Online C compiler to run C program online
#include <stdio.h>
// https://www.hackerrank.com/contests/phitron-monthly-contest-a-batch-6/challenges/sum-of-evens-3
int main() {
    // Write C code here
    // printf("Try programiz.pro\n");
    long long N;
    scanf("%lld",&N);
    long long sum=0;
    for(long long i=1; i<=N;i++){
        if(i%2==0){
            // printf("i= %lld sum=%lld\n",i,sum);
            sum = sum+ i;
        }
    }
    printf("%lld",sum);

    return 0;
}