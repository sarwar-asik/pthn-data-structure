#include <stdio.h>


int arr[100000];
int sumFunc (int i, int n){
    if(i==n){
        return 0;
    }

printf("arr is %d\n",arr[i]);
     return arr[i] +sumFunc(i+1,n);
}
int main()
{

    int n;
    scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


int sum =sumFunc(0,n);
printf("%d",sum);

    
    return 0;
}