#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << "Hello setprecision\n";
  
  double d = 22.14333;
  cout << fixed << setprecision(3)<<d << endl; // fixed decimal places


    return 0;
}