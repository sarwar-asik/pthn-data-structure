#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    stack<int>stack_1;

    // stack_1.push(10);
    // stack_1.push(20);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        stack_1.push(x);
    }
    while(!stack_1.empty()){
        cout << stack_1.top() << endl;
        stack_1.pop();
    }
    
    return 0;
}