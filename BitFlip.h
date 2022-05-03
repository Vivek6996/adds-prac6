#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip: public Mutator {

    public:
     Individual* mutate(Individual * person, int k);

    private:
        int lenList;
        int track;

};
#endif