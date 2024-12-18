#include<bits/stdc++.h>
using namespace std;



void fun(int * &p){  //! use & for get changed from main
    int y=200;
    p= &y;
    cout <<"in fun "<< &p <<endl;
}
int main() {
    // main code here
    int x = 10;
    int *p = &x;
    fun(p);//! here can not get the 200 becz add is diff
    cout<<"main "<<&p<<endl;
    return 0;
}