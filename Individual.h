#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual {

    public:
        Individual(std::string lenDNA);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

    private:
    std::string binaryString;
    int len;
    std::string copy;


};

#endif