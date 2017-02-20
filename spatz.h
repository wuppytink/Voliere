#ifndef __SPATZ_H_INCLUDED__
#define __SPATZ_H_INCLUDED__

#include "vogel.h"

class CSpatz: public CVogel{
    public:
        CSpatz(string v);
        ~CSpatz();
    
    virtual void sing(bool cat);
    virtual string race();
};

#endif