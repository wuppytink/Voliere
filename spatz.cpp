#include "spatz.h"

        CSpatz::CSpatz(string v):CVogel(v){}
        CSpatz::~CSpatz(){}

void CSpatz::sing(bool cat) {
    if (cat){
        for(int j = 0; j<2; j++){
            cout << "Piep" << endl;
        }
    }else{
        cout << "Piep";
    }
}
string CSpatz::race() {return "Spatz";}