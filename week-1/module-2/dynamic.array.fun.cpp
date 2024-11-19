#include<bits/stdc++.h>
using namespace std;


int* testFunc(){
    int arr[5];
    for(int i=0;i<5;i++){
     cin >> arr[i];
    }
    return arr;
  
}

int main(){
    cout << "Hello dynamic array\n";

    int *x = testFunc();

    return 0;
} 