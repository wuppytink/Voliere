#ifndef __VOGEL_H_INCLUDED__
#define __VOGEL_H_INCLUDED__

#include <string>
#include <iostream>

using namespace std; 

class CVogel{
protected: 
    string name;
    
public:
    CVogel(string lore = "piep"){name = lore;}
    ~CVogel(){}
    
    string getName(){return name;}
    virtual void sing(bool cat) {cout << "Alle Voegel sind schon da!\n";}
    virtual string race() {cout << "";}
};

#endif