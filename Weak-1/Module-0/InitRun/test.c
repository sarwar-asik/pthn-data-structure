#include <stdio.h>

int main() {
    printf("first init code!\n");
    int a;
    scanf("%d",&a);
    printf("%d\n",a);

    int M;
    scanf("%d",&M);
    if(M >=1000){
     printf("Three Kacchi\n");
    }
    else if (M>=500){
        printf("One Large Pizza\n");
    }
    else if (500>M>=250){
      printf("Three Small Burger\n");
    }
    else if(M>=100){
        printf("Three Fuchka\n");
    }
    else{
        printf("Nothing\n");
    }
    return 0;
}
