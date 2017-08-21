#include "bapTools.h"

void generateRandomPtxt(vector<HAEPtxt>& ptxt, int num){
    ptxt.clear();
    ptxt.resize(num);
    
    for(unsigned long i = 0; i < num; i++){
        ptxt[i].msg = rand() % 10;
        ptxt[i].tag = rand() % 10;
    }
}

void generateBinaryMsg(vector<HAEPtxt>& ptxt, int num){
    ptxt.clear();
    ptxt.resize(num);
    
    for(unsigned long i = 0; i < num; i++){
        ptxt[i].msg = rand() % 2;
        ptxt[i].tag = rand() % 10;
    }
}

void generateRandomSumOne(vector<ZZ>& rnd){
    rnd.clear();
    rnd.resize(NUMMASK);
    
    ZZ sum;

    for(unsigned long i = 0; i < NUMMASK - 1; i++){
        RandomBits(rnd[i], RANDOMBITS);
        sum += rnd[i];
    }

    rnd[NUMMASK] = 1 - sum;
}