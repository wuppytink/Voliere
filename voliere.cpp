#include "voliere.h"
#include <typeinfo>
#include <sstream>
CVoliere::CVoliere(){}
CVoliere::~CVoliere(){}


void CVoliere::addBird(CVogel* v){
    meineVoliere.push_back(v);
    cout << "size "<< meineVoliere.size() <<" maxSize " << meineVoliere.max_size() <<" capacity " << meineVoliere.capacity() << endl;    
    //meineVoliere.resize(meineVoliere.size() +1); //push_back resized selber   
}

void CVoliere::deleteBird(string vogelName){
    for(vector<CVogel*>::iterator i = meineVoliere.begin(); i != meineVoliere.end(); i++){
        if((*i)->getName().compare(vogelName)){
            meineVoliere.erase(i);
        }
    }
}

void CVoliere::simulate(bool cat){
   for(vector<CVogel*>::iterator i = meineVoliere.begin(); i != meineVoliere.end(); i++){
       (*i)->sing(cat);
    }
}


void CVoliere::showBirds(){
    for(vector<CVogel*>::iterator i = meineVoliere.begin(); i != meineVoliere.end(); i++){
        stringstream sstr;
        sstr << (*i)->getName() << ": " << (*i)->race() << "." << endl;
        cout << sstr.str();
    }
 }
