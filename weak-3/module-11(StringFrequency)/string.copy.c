#include <stdio.h>
#include<string.h>
int main() {
    char a[10];
    char b[10];
    printf("Enter max 10 text= ");
    scanf("%s",b);
    //!  raw way
    // int lengthb = strlen(b);
    // for(int i =0;i< lengthb;i++){
    //     a[i]= b[i];
    // }
    // a[lengthb]='\0';
    // printf("%s and %s",a,b);
    
    //! include headers file
    strcpy(a,b);
     printf("%s and %s",a,b);
     

    return 0;
}