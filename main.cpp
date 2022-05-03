#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

using namespace std;


  Individual * execute(Individual * indPtr, Mutator * mPtr, int k){

      Individual* individual1 = mPtr->mutate(indPtr, k);
      return individual1;
    

  }
 


int main(){
 
    string binarystr1;
    string binarystr2;

    int k1;
    int k2;

    cin >> binarystr1;
    cin >> k1;

    cin >> binarystr2;
    cin >> k2;

    Mutator *m1 = new BitFlip();
    Mutator *m2 = new Rearrange();

    Individual *i1 = new Individual(binarystr1);
    Individual *i2 = execute(i1 ,m1 ,k1);
    Individual *i3 = new Individual(binarystr2);
    Individual *i4 = execute(i3 , m2 ,k2);

    

    string mutateS = i2->getString();

    int lengthOfMS = i2->getLength();
        for (int i = 0; i < lengthOfMS; i++) {
        cout << mutateS[i];
    }

    cout << " ";

    string x = i4->getString();

    int m = i4->getMaxOnes();

    int lenRL = i4->getLength();
        for (int i = 0; i < lenRL ; i++) {
            cout << x[i];
    }

    cout << " ";

    cout << m << '\n';

    return 0;

    }








