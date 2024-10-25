#include <stdio.h>
#include<string.h>
int main() {


char str[100];
printf("Enter the string= ");
scanf("%s",str);
int length=strlen(str);

// for(int i=length-1;i>=0;i--){
//     printf("%c",str[i]);
// }

// ! raw way

for(int i=0,j=length-1;i<=j;i++,j--){
    char temp= str[i];
    printf("\n ========first %c %c",temp,str[j]);
    str[i]=str[j];
        printf("\n second %c %c",temp,str[j]);
     str[j]=temp;
        printf("\n third %c %c",temp,str[j]);   
}

printf("\n reversed=%s",str);

// ! method .It is not working in all env
// strrev(str);
// printf("\n reversed=%s",str);



    return 0;
}