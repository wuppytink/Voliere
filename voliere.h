#ifndef __VOLIERE_H_INCLUDED__
#define __VOLIERE_H_INCLUDED__

#include <cstdlib>
#include <vector>
#include "taube.h"
#include "spatz.h"
#include "rabe.h"

using namespace std;

class CVoliere{
protected:
    vector<CVogel*> meineVoliere;

public:
    CVoliere(int size);
    ~CVoliere();
    
    
    void addBird(CVogel* v);
    void deleteBird(string v);
    void showBirds();
    void simulate(bool cat);
};

#endif