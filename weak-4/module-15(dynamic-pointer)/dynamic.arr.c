#include <stdio.h>
# include <stdlib.h>
int main(){

//!  use flexible length
// memory efficiently
//! should handle NULL error
/// use based on situations
//! it can memory leak
// 1. reallocation
// 2. malloc
// 3.  free 

int * array=(int *)malloc(5* sizeof(int));

for(int i=0;i<5;i++){
    array[i]=i+1;
}

for(int i=0;i<5;i++){
    printf(" %d ",array[i]);
}

printf("\n");

int *temp=array;
array = (int*)realloc(array,10*sizeof(int)); /// it can be memory leak
if(array==NULL){
    array = temp;
}

for(int i=5;i<10;i++){
    array[i]= i+1;
}
for(int i=0;i<10;i++){
    printf(" %d ",array[i]);
}

free(array);

return 0;

}