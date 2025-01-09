#include<bits/stdc++.h>
using namespace std;

void printForwardLink(list <int> L){
    cout <<"L -> ";
    for(auto it=L.begin(); it!=L.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
};
void printBackwardLink(list <int> L){
    cout <<"R -> ";
    for(auto it=L.rbegin(); it!=L.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
};
int main() {
    
    list <int> L;
    int Q;
    cin >> Q;
    while(Q--){
        int X,V;
        cin >> X >> V;
        if(X==0){
            L.push_front(V);
            printForwardLink(L);
            printBackwardLink(L);
        }
        else if(X==1){
            L.push_back(V);
            printForwardLink(L);
            printBackwardLink(L);
        }
        else if(X==2){
               int length= L.size();
              
           if(V == length){
             L.pop_back();
             printForwardLink(L);
             printBackwardLink(L);
           }
           else if( V == 0){
             L.pop_front();
             printForwardLink(L);
             printBackwardLink(L);
           }
           else if (V<length){
            L.erase(next(L.begin(),X-1));
            printForwardLink(L);
            printBackwardLink(L);
           }
           else{
            
            printForwardLink(L);
            printBackwardLink(L);
           }
        
        }
    }
    
    return 0;
}