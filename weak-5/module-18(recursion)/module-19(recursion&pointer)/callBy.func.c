#include <stdio.h>

void callByFunc(int x,int *y){
  x *=10; //! mutiply with 10
  (*y)*=10;
printf("x= %d y= %d from function\n",x,*y);
 

}
 
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
   callByFunc(x,&y);  ///! x is call by value
                      //! y is call by reference
    printf("x= %d y= %d\n",x,y);
    return 0;
}