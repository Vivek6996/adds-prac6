#ifndef REARRANGE_H
#define REARRANGE_H

#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class Rearrange: public Mutator {

    public:
    Individual mutate(Individual person, int k);

    private:
        int lenList;
        int track;


};
#endif