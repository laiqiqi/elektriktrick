#ifndef ETVERTEX_H
#define ETVERTEX_H

#include "ETVector.h"

class ETVertex
{
public:
    ETVertex();
//private:
    ETVector p;
    ETVector n, nMin, nMax;
    int nMinN, nMaxN;
};

#endif // ETVERTEX_H
