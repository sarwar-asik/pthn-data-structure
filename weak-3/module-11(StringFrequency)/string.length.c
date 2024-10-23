#include <stdio.h>
#include<string.h>
int main() {


char str[10]= "abcd afd";
// char str[10]= "abcd\0 afd"; //! it will show 4
//! raw way
int length=0;
for(int i = 0; str[i]!='\0';i++){
    length++;
}
printf("%d\n",length);

//! by headers library funtion
int lengthH = strlen(str);
printf("%d",lengthH);

    return 0;
}