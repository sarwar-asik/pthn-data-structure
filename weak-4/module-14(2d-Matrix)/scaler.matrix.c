#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);

  int matrix[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
    }
  }

int flag = 1;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i== j){
            if(matrix[i][i]!=matrix[0][0]){
                flag=0;
                break;
            }else{
                if(matrix[i][j]!= 0){
                    flag =0;
                    break;
                }
            }
        }
    }
    if(flag==0){
        break;
    }
  }


if(flag==1){
    printf("Yes. Matrix is scaler");
}else{
    printf("No. Matrix is not scaler");
}



    return 0;
}