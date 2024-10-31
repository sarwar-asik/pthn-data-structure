#include <stdio.h>
int main(){

 int arr[5]= {1,2,3,4,5};

 int *p=arr;
 printf("%d and %d \n",&arr[0],p);
 printf("%d\n",(p+1));

 int a =6;
 int *x=&a;
 printf("x= %d x+1=%d\n",x,x+1); ///! incremented 4 byte

 char chr1= 'a';
 char *chr2 =&chr1;
 printf("chr1= %d chr2= %d\n",chr1,chr2+1);  ///! incremented 1 byte
 
  return 0;

}