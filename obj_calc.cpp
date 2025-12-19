#include "obj2.hpp"

int main () {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};
    // test: 1 + 1
    Calc::ice_cream x(0, '+');
    Calc::ice_cream y(1, 'e');   
    Calc::ice_cream z(1, 'e');
    
    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

calc.village (load_eq); 

    return 0;
    
}

void Calc::village(vector<ice_cream> x) {
    map_ice_clown(x);
}

vector<Calc::clowns> Calc::map_ice_clown (vector<Calc::ice_cream> ice) {
    for(int i=0; i<ice.size(); i++) {
        // the set in the case of x.size = 3 is [ i=0, i=1, i=2 ]
       // for each ice cream, we will create a new dicho object
           clowns c(x.at(i).flavor, x.at(i).cone);
        printf("%d, %c", c.num, c.op);
    }
    return ;
        }
