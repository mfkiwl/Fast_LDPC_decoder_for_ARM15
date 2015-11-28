#ifndef CLASS_ChanelLibrary
#define CLASS_ChanelLibrary

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "./CChanel.h"
#include "./CChanelAWGN_x86.h"
//#include "./CChanelAWGN.h"
//#include "./CChanelRayleighFading.h"
//#include "./CChanelZero.h"

CChanel* CreateChannel(CTrame *trame, bool QPSK_CHANNEL, bool Es_N0) {
    return new CChanelAWGN_x86(trame, 4, QPSK_CHANNEL, Es_N0);
}


#endif
