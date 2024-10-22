#include <stdio.h>

int main() {
    char c[]="abcd";
    char str[5]= {'a', 'b', 'c', 'd', 'e'};


//  string print
    printf("%s\n", c);
    printf("%s\n", str);

// !string scanf
// char str1[4];
// scanf("%s", str1); //!str1 refereed to location so , do not need &;
// printf("%s\n", str1);


//! scan sentence string-1

char sentence[10];
// scanf("%[^\n]s",sentence);
// printf("output =%s\n", sentence);



// scan sentence string-2(#deprecated).
char sentence2[10];
// gets(sentence2);  //! it does not support everywhere(#deprecated).


// scan sentence string-3
// fgets(sentence2,sizeof(sentence2),stdin); //! stdin mean standard input


// scan sentence string-4(#deprecated).
// puts(sentence2);

// scan sentence string-5
fputs(sentence2,stdout); //! stdout mean standard output

printf("output =%s\n", sentence2);




  return 0;
}