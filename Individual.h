#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual {

    public:
        Individual(std::string lenDNA);
        Individual(int lengthh);

        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

        std::string binaryString;
        int len;
        std::string copy;


};

#endif