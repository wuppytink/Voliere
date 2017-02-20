#ifndef __TAUBE_H_INCLUDED__
#define __TAUBE_H_INCLUDED__

#include "vogel.h"

class CTaube: public CVogel{
public:
        CTaube(string v);
        ~CTaube();
    
    virtual void sing();
    virtual string race();
};

#endif