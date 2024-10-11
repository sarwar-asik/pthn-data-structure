#include<stdio.h>
#include<limits.h>
int main(){
    printf("Run the programme test \n");
    int n;
    printf("Enter the size of array: ");    
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int max=INT_MIN, min=INT_MAX;
//    printf("max: %d, min: %d\n",max,min);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
    }

 printf("max=%d, min=%d\n",max,min);
    
    return 0;

}