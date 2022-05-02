#ifndef MUTATOR_H
#define MUTATOR_H

#include <iostream>
#include <string>

#include "Individual.h"

class Mutator {

    public:
        Mutator();
        virtual Individual mutate(Individual person, int k) = 0;


};
#endif