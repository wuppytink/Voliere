#include "voliere.h"
#include <typeinfo>

CVoliere::CVoliere(int size){meineVoliere.reserve(size);}
CVoliere::~CVoliere(){}


void CVoliere::addBird(CVogel* v){
cout << "size "<< meineVoliere.size() <<" maxSize " << meineVoliere.max_size() <<" capacity " << meineVoliere.capacity() << endl;    
    meineVoliere.push_back(v);   
//    meineVoliere.resize(meineVoliere.size() +1); //push_back resized selber   
}

void CVoliere::deleteBird(string vogelName){
/*    for(int i = 0; i < meineVoliere.size(); i++){
        if(meineVoliere[i].getName().compare(vogelName)){
            meineVoliere.erase(meineVoliere.begin()+i);
        }
    }
*/}

void CVoliere::simulate(bool cat){
/*    for(int i = 0; i < meineVoliere.size(); i++){
        if(cat){
            if(typeid(meineVoliere[i]) == typeid(CTaube)){
                        for(int i = 0; i<3; i++){
                            meineVoliere[i].sing();
                        }
            }else if(typeid(meineVoliere[i]) == typeid(CSpatz)){
                        for(int i = 0; i<2; i++){
                            meineVoliere[i].sing();
                        }
            }else if(typeid(meineVoliere[i]) == typeid(CRabe)){
                    meineVoliere[i].sing();
            }

        }else{
                meineVoliere[i].sing();
        }
    }
*/}


void CVoliere::showBirds(){
    /*for(int i = 0; i < meineVoliere.size(); i++){
        
        cout << meineVoliere[i].getName() << " " << meineVoliere[i].race() << endl;
    }*/
 }
