# include<stdio.h>

//! 3 
// 123 432 2345
// !3 2 1 
// 2 3 4 
// 5 4 3 2 

void digitFunc(int n){
 
 if(n==0){
     return;
 }
    int digit = n%10;

    printf("%d ",digit);
    digitFunc(n/10);

}


int main(){

    int length;

    scanf("%d",&length);

  

  for (int i = 0; i < length; i++) {
    int input;
    scanf("%d",&input);
        digitFunc(input);
        printf("\n");
  }


    return 0;
}