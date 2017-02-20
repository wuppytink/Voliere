#ifndef __RABE_H_INCLUDED__
#define __RABE_H_INCLUDED__

#include "vogel.h"

class CRabe: public CVogel{
    public:
         CRabe(string v);
        ~CRabe();
        
    virtual void sing(bool cat);
    virtual string race();
};

#endif