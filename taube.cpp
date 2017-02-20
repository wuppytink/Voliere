#include "taube.h"

        CTaube::CTaube(string v):CVogel(v){}
                CTaube::~CTaube(){}

void CTaube::sing(bool cat){
    if (cat){
        for(int j = 0; j<3; j++){
            cout << "Gurr " << endl;
        }
    }else{
        cout << "Gurr" << endl;
    }
}
string CTaube::race(){return "Taube";}
