# Weak-2 practice

## Module-6
- case check with int and char 
- [create patter with number](#problem)


---
---
---
## Module- 7 (Array)
- Input array and output 
- declare array and print element
- max and min number check 
- [design 5 pattern](./module-6Loop/pattern/pattern.design.c)

#### Basic
array প্রথমে একটা definit জায়গা নিয়া রাখে ।
## Problem
- [case-formate-find](./module-5Condition/codeforce/caseFinder.c)
- [convert-char-input-to-capital](./module-5Condition/codeforce/char.c)
- [reverse-digit(37>>>73)](./module-5Condition/codeforce/digit.reverse.c)
- [first-digit-odd-check(35>>>Odd)](./module-5Condition/codeforce/firstDigit.odd.c)
- <[pattern-design](./module-5Condition/codeforce/patter.c)
- [is-divided-between(63>>>Yes)](./module-6Loop/codeforce/Divisors.c)
- [create-5-pattern-loop](./module-6Loop/pattern/pattern.design.c)

```c 
int a[3]= {3,2,1};
    printf("%d %d %d",a[0],a[1],a[2]);
```
---
- Input array and output 
```c
long long int a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);

    // printf("%d %d %d", a[0], a[1], a[2]);
    for(long long int i =0; i<3;i++){
        scanf("%lld",&a[i]);
    }
    printf("%lld , %lld , %lld\n", a[0], a[1], a[2]);
   
   for (int i =0;i<3;i++){
    printf("%lld ",a[i]);
   }
```
---

- max and min number check 
```c 
 int n;
    printf("Enter the size of array: ");    
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int max=INT_MIN, min=INT_MAX;
//    printf("max: %d, min: %d\n",max,min);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
    }

 printf("max=%d, min=%d\n",max,min);
```
---
-patter design
```c
/ 1
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

``` 


---
---
---

