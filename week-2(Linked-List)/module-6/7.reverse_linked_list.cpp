#include<bits/stdc++.h>
using namespace std;

void rec(int i,int n){
 if(i>5){
    return;
 }
    cout<<i<<endl;
    rec(i+1,n);
};
int main() {
    // main code here

    int n=5;
    rec(1,n);
    return 0;
}