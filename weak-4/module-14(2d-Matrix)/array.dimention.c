#include<stdio.h>

int main(){

int arr[3][5]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{12,13,14}};

for(int i=0;i<3;i++){
    for(int j = 0;j<5;j++){
        printf(" i= %d j= %d",i,j);
    }
    printf("\n");
}

return 0;
}