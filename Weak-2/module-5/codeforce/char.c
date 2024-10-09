#include<stdio.h>


// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
int main(){
    // convert the char input to capital 
    ///and capital >small

    printf("Enter the char\n");
    char letter;
    scanf("%c",&letter);
    if(letter>='a'&&letter<='z' ){
        char capital = letter-32;
        printf("%c",capital);

    }

    return 0;
}