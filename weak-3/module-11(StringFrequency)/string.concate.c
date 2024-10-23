#include <stdio.h>
#include<string.h>
int main() {
    char a[15]="hello";
    char b[15]="fanka?";
    
    //! raw concat way 
    // int len_a = strlen(a);
    // int len_b = strlen(b);
    // int length = len_a+len_b;
    // for(int i=len_a,j=0;i<length;i++,j++){
    //     printf("\ni=%d j=%d\n",i,j);
    //     a[i]= b[j];
    // }
    
    // a[length]='\0';
    
    // printf("\n %s",a);
    
    
    //// ! header method
    strcat(a,b);
    
      printf("\n %s",a);


    return 0;
}