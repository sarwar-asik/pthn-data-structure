#include <stdio.h>


void distribute(int roll,int x){
    if(x==0){
        return;
    }
    printf("roll =%d and x=%d\n",roll,x);
  distribute(roll+1,x-1); ///! this is recursion
}
int main()
{
    

distribute(1,5);
    return 0;
}