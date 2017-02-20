#include "rabe.h"

CRabe::CRabe(string v):CVogel(v){}
CRabe::~CRabe(){}

void CRabe::sing(bool cat){cout << "Kra\n";}
string CRabe::race(){return "Rabe";}