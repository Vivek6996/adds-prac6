#include "BitFlip.h"
#include "Individual.h"
#include "Mutator.h"

#include <iostream>
#include <string>

using namespace std;

Individual* BitFlip::mutate(Individual* person, int k){

    lenList = person->getLength();

    track = k % lenList;

    if (track == 0){
        track = lenList - 1;
    } else {
        track = track - 1;
    }

    person->flipBit(track);

    return person;
}



