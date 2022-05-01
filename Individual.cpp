#include "Individual.h"


Individual::Individual(std::string lenDNA){

    len = lenDNA.size();

    for (int i = 0; i < len; i++){
        copy[i] = '0';
    }
    binaryString = lenDNA;
}

std::string Individual::getString(){

    return binaryString;


}

int Individual::getBit(int pos){
    
    if (binaryString[pos] == '1'){

        return 1;
    }

    if (pos > len) {
        return -1;
    }

    return binaryString[pos];


}

void Individual::flipBit(int pos){

    if (binaryString[pos] == '0'){
        binaryString[pos] = '1';
    } else {
        binaryString[pos] = '0';
    }


}

int Individual::getMaxOnes(){

int max = 0;
int sum = 0;

for (int i = 0; i < len; i++){  

    if (binaryString[i == '1']) {
        sum += 1;
    }

    if (sum > max) {
        max = sum;
    } else if (binaryString[i] == '0'){

        sum = 0;
    }


}
    return max;

}

int Individual::getLength(){

    return len;

}