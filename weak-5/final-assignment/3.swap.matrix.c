
#include <stdio.h>

int main()
{
    // printf("Hello, World!\n");
  int N,M;
  scanf("%d %d",&N,&M);
  int matrix[N][M];
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          scanf("%d",&matrix[i][j]);
      }
  }
  
  printf("Before Swapping\n");

  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          printf("%d ",matrix[i][j]);
      }
      printf("\n");
  }
  
  printf("After Swapping\n");
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          printf("%d ",matrix[j][i]);
      }
      printf("\n");
  }
    return 0;
}