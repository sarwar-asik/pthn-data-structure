#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
int main(){
 
 int X,Y;
 cin >>X >> Y;
 int sum = X+Y;
 int multi = X*Y;
 int sub= X-Y;
 cout << X << " + "<<Y <<" = "<<sum <<endl;
 cout << X << " * "<<Y <<" = "<<multi <<endl;
 cout << X << " - "<<Y <<" = "<<sub <<endl;

    return 0;
}