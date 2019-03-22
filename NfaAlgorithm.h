//
// Created by ahmed on 18/03/19.
//

#ifndef LEXICALANALYZER_NFAALGORITHM_H
#define LEXICALANALYZER_NFAALGORITHM_H

#include "NFAStatee.h"

class NfaAlgorithm {

    vector<NFAStatee> NfaStates;
    vector <NFAStatee>StartStateTrack;
    vector <string> All_inputs;

private:
    int stateIdCounter=0;
public:


    void Algorithm(string token,string regularExpression);
    vector <string> get_All_inputs();
   // NFAStatee getStarState();


};


#endif //LEXICALANALYZER_NFAALGORITHM_H
