#include<bits/stdc++.h>

using namespace std;

int main(){

int *arr =new int[3];
cout<< "Enter 3 numbers = " <<endl;
for(int i=0;i<3;i++){
    cin >> arr[i];
}

int *array2 = new int[5];

for (int i = 0; i < 3; i++)
{
    array2[i]=arr[i];
}
array2[3]=100;
array2[4]=200;
delete[] arr;
for(int i=0;i<5;i++){
    cout << array2[i]<<" ";
}


    return 0;
} 