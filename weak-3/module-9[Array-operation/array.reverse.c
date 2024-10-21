#include <stdio.h>

// 5
//intput =>  5 3 1 9 2
// output => 2 9 1 3 5
int main() {

    int length ;
  printf("Enter the size of array: ");
  scanf("%d", &length);

    int arr[length];
    int arr2[length];
   

    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    printf("now=");
    
    for(int i = length;i>0;i--){
        // printf("%d", i); 
        printf("%d\n i", arr[i]); 
        arr2[i] = arr[i];
    }
    for(int i = 0; i < length; i++) {
      printf("%d ", arr[i]);
    }


return 0;
}