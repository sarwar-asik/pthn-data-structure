#include<stdio.h>

int main(){
    printf("Started the programme \n");

for(int i=0;i<=100;i++){
    if(i%2==0 && i%3==0 && i%5==0){
        printf("%d is divided by 2,3,5 \n", i);
        break;  //! we will go ahead 
        // continue; //! will not excecute for the match but will not stop go next
      }
      printf("%d \n",i);
   }
    return 0;
}