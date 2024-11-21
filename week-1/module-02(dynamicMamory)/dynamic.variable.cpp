#include<bits/stdc++.h>
using namespace std;

int *p;
void testFunc (){
    //! for static integer
    // int x = 10; 
    // p= &x; 
    // !for dynamic variable
    int *x= new int;
    *x =20;
    p= x;
    cout << "Value of p from testFunc = " << *p << endl;
    return;
}
int main(){
    cout << "Hello dynamic variable\n";
    testFunc();
    cout << "Value of p from main = " << *p << endl;    /// deleted from stack memory . but not in windows
 
 //! dynamic variable
   int x= 10; /// stored in stack memory
   int *dynV = new int;  // stored in heap memory
   *dynV = 200;
   cout<< *dynV <<endl;


    return 0;   
}