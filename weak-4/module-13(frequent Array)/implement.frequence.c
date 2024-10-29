#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n+5];
    printf("Enter numbers list  = \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int f[100000]={0}; ///! created a frequency array
    for(int i=0;i<n;i++){
        f[arr[i]]=1;
    }

    for(int i=0;i<n;i++){
        printf("%d %d \n",i,f[i]);
    }

  int search;
  printf("Enter the number you want to search = \n");
  scanf("%d",&search);
  if(f[search]==1){
      printf("Yes");
  }
  else{
      printf("No");
  }




    return 0;
}