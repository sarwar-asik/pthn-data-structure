#include<iostream>
#include<algorithm>
using namespace std;

int main(){
 cout << "Hello min max\n";
 int a,b;
 cout<<"Enter two numbers = ";
 cin >>a>>b;


//  min max
 cout << "Min =" << min(a,b)<<endl;
 cout << "Max ="<< max(a,b)<<endl;

 //  swap

 swap(a,b);
 cout << "a = " << a <<endl;
 cout << "b = " << b <<endl;
   return 0;
}