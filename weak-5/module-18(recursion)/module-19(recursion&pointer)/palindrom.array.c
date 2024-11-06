
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
int isPlainFUnc(int *array,int start,int end){

    if(start>end){
        return 1;
    }
    // printf("satrt=%d  end=%d\n",array[start],array[end]);

    return array[start] == array[end] && isPlainFUnc(array,start+1,end-1);
}

int main(){
    int length;
    scanf("%d",&length);
  int arr[length];

  for (int i = 0; i < length; i++) {
    scanf("%d",&arr[i]);
  }
  
  if(isPlainFUnc(arr,0,length-1)){
      printf("YES\n");
  }else{
        printf("NO\n");
  }


    return 0;
}