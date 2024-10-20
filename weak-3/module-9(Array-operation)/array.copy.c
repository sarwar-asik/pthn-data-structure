#include <stdio.h>

int main() {
    int arr[5];
    int arr2[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
       printf(" before = ");
    for(int i = 0; i < 5; i++) {
        printf(" %d ", arr[i]);
        arr2[i]=arr[i];
    }
      for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]); 
    }

return 0;
}