#include <stdio.h>

int main() {
    // Write C code here
    //! pattern-1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

     for(int main=1;main<=6;main++){
      
        for(int i=1;i<main;i++){
            printf("%d ",i);
        }
          printf("%d \n", main);
     }

printf("Pattern-2\n\n");
//!5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

    for(int main=5;main>=1;main--){
    //   printf("%d \n ", main);
        for(int i=main;i>=1;i--){
            printf("%d ",i);
        }
          printf("\n");
     }
     
     printf("Pattern-3\n\n");

for(int N=0;N<=6;N++){
    for(char l=65;l<=70;l++){
        printf("%c ",l);
        // N++;
    }
    printf("\n");
}

//           *
//         * * *
//       * * * * *
//      * * * * * * *
//    * * * * * * * * *
     
     for (int main=1;main<=6;main++){
     
        for(int i=1;i<=6-main;i++){
            printf(" ");
        }
          for(int j=1;j<=2*main-1;j++){
            printf("*");
        }
          printf("\n");
     }

    return 0;
}