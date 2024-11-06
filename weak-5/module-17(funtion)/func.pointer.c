#include <stdio.h>


void swap(int *a ,int *b){
int temp = *a ;
*a= *b;
*b=temp;
printf("func pointer %p %p \n",a,b);
    
}
int main() {

    int a = 10;
    int b=20;
      swap(&a,&b);
      printf("a=%d b=%d\n",a,b);

  return 0;
}