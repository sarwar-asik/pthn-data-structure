#include <stdio.h>

int sumFunc(int list[],int length){
    int sum=0;
   for(int i=0;i<length;i++){
    //   printf("%d ",list[i]);
    sum+=list[i];
   }
   
   return sum;
}
 
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
 int sumt =sumFunc(arr,10);
   printf("%d is sum \n",sumt);
    return 0;
}