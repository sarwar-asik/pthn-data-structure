#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for(int i= 0;i<n;i++){
        cin >> a[i];
    }
    // sort(a,a+n);
    reverse(a,a+n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    // string reverse
    string str;
    cin >> str;
    reverse(str.begin(),str.end());
    cout << str << endl;

    }
