#include<bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};
int main() {
    // main code here
    Cricketer* Tamim = new Cricketer("Bangladesh", 7);
    // cout<<Tamim->country<<" "<<Tamim->jersey<<endl;
    Cricketer* Sakib = new Cricketer("India", 7);
    // Tamim = Sakib; //! do it for dynamic object


    //! way-1
    // Tamim->country= Sakib->country;
    // Tamim->jersey = Sakib->jersey;

    //! way-2
    *Tamim = *Sakib;

    delete Tamim;
    
    cout<<Sakib->country<<" "<<Sakib->jersey<<endl;


    return 0;
}