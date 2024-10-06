#include<stdio.h>

int main (){
    printf("Started the programme\n");
    // for (int i=0;i<10;i++){
    //     printf("%d\n",i);
    // }
    // for(int i=0 ; i<=5;i++){
    //     printf("%d\n",i);
    //     for(int j=1;j<3;j++){
    //         printf("* %d *\n",j);
    //         // printf("%d\n",i);
    //     }
    // }

    int j=0,i=0;
    for (j=1;j<=5;j++){
        i++;
        printf("i= %d\n",i);
        printf("j= %d \n",j);
    }
    printf("j is %d\n",j);  // ! very interesting problem

  int m = -5;
    while(m<3)
    {
        printf("hello ");
        m+=2;
    }
    return 0;
}