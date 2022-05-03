#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
#include "Individual.h"

#include <iostream>
#include <string>

class BitFlipProb: public Mutator {

    public:
    BitFlipProb(double p);
     Individual* mutate(Individual * person, int k);


};
#endif