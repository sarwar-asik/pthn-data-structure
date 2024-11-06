# include<stdio.h>


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