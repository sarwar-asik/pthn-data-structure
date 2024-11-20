#include<bits/stdc++.h>
using namespace std;


int* testFunc(){
    // int arr[5]; ///! static array
   int *arr= new int[5]; //! dynamic array
    for(int i=0;i<5;i++){
     cin >> arr[i];
    }
    return arr;  /// array return as pointer so used 
  
}

int main(){
    cout << "Hello dynamic array\n";

    int *x = testFunc();
    for(int i=0;i<5;i++){
     cout << x[i]<<" ";
    }

    // ! you can not use this array outside of the function. if it is in static array

    return 0;
} 