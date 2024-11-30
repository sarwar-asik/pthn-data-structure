#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
int main() {
    // main code here
    string S;
    cin >> S;
    // cout<<S<<endl;
    int e=0;
    int g =0;
    int y=0;
    int p=0;
    int t =0;
   for(char c:S){
    // cout << c << endl;
    if(c == 'e' || c == 'E'){     
        e++;    
    }else if(c == 'g' || c == 'G'){
        g++;
    }else if(c == 'y' || c == 'Y'){
        y++;
    }else if(c == 'p' || c == 'P'){
        p++;
    }else if(c == 't' || c == 'T'){
        t++;
    }      
   }
   
   cout << min({e,g,y,p,t}) << endl;
    return 0;
}