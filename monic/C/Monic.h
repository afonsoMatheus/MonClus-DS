/* Author: Afonso Matheus   */
/* Date: 2021              */
//---------------------------------------------------------------------------

#ifndef MONIC_H
#define MONIC_H

#include <string.h>
#include "General.h"
#include "Util.h"
#include "OverlapMatrix.h"
#include "WeightAge.h"
#include "IntTransitions.h"
#include "ExtTransitions.h"

//---------------------------------------------------------------------------

void showTransitions(struct Transitions); 

struct Clustering *readCsv(char*);

#endif