#include <stdio.h>

int main() {

char str[20];

scanf("%s", str);

printf("The entered string is: %s\n", str);
printf("0 is %d",'0');
int num= 0;
for (int i=0;i<5;i++){
 int digit =str[i]-'0';
//  printf("%d\n",digit);
num = num*10 + digit;
}
printf("\n answer is %d\n",num);

    return 0;
}