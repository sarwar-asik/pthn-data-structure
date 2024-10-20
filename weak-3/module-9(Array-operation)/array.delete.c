#include <stdio.h>

// 5
//intput =>  5 3 1 9 2
// 2 
// output => 5 3 9 2
int main() {

    int length ;
  printf("Enter the size of array: ");
  scanf("%d", &length);

    int arr[length];
   

    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    int index;
    printf("Enter the index to delete: ");
    scanf("%d", &index);
    for(int i = index;i<length-1;i++){
        arr[i] = arr[i+1];
    }
    length--;
    for(int i = 0; i < length; i++) {
      printf("%d ", arr[i]);
    }


return 0;
}