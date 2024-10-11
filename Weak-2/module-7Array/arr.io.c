#include<stdio.h>

int main(){
    printf("Run the programme test \n");
    long long int a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);

    // printf("%d %d %d", a[0], a[1], a[2]);
    for(long long int i =0; i<3;i++){
        scanf("%lld",&a[i]);
    }
    printf("%lld , %lld , %lld\n", a[0], a[1], a[2]);
   
   for (int i =0;i<3;i++){
    printf("%lld ",a[i]);
   }


    return 0;
}