#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="applddde";
    int f[26]={0}; 
    int length= strlen(str1);

    for(int i=0;i<length;i++){
        char ch = str1[i];
        int index = ch-'a';
        f[index]=1;
    }

    for(int i=0;i<26;i++){
        if(f[i]==1){
            printf("%c ",i+'a');
        }
    }
    
 
return 0;

}