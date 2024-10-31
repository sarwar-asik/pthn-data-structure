#include <stdio.h>
int main(){
 
  
//  !  Basic Pointer
  int a =5;
  int *b= &a;

  printf("before a=%d\n",a);
  printf("a  = %d\n",&a);  //! address of a variable
  printf("b = %d\n",b);    /// address of b

printf("b value = %d\n",*b);

*b = 6;

printf("a replaced = %d\n",a); //! a replaced 6

// ! Dereference 

int num1=5, num2=6;
int *x= &num1,*y=&num2;
printf("num1=%d, num2=%d\n",num1,num2);


int temp= *x;

printf("temp = %d\n",temp);
 *x=*y;
 *y =temp;
 printf("num1=%d, num2=%d\n",num1,num2);

  return 0;

}