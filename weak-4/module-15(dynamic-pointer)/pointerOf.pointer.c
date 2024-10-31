#include <stdio.h>
int main(){
 
  int a =5;

  int *x = &a;
  int **y =&x;
  printf("a= %d x= %d , y= %d\n",a,&x,**y); ///! here y is pointer of pointer


  return 0;

}