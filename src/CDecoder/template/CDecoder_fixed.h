/**
  Copyright (c) 2012-2015 "Bordeaux INP, Bertrand LE GAL"
  [http://legal.vvv.enseirb-matmeca.fr]
  This file is part of LDPC_C_Simulator.
  LDPC_C_Simulator is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __CDecoder_fixed__
#define __CDecoder_fixed__

#include "./CDecoder.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class CDecoder_fixed : public CDecoder{
protected:
    int vSAT_NEG_MSG;
    int vSAT_POS_MSG;
    int vSAT_NEG_VAR;
    int vSAT_POS_VAR;

public:
    CDecoder_fixed();
    virtual ~CDecoder_fixed();
    virtual void setVarRange(int min, int max);
    virtual void setMsgRange(int min, int max);
    virtual void decode(signed char  var_nodes[], signed char Rprime_fix[], int nombre_iterations) = 0;
    virtual void decode(float        var_nodes[], signed char Rprime_fix[], int nombre_iterations) = 0;
};

#endif
