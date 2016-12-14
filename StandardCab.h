//
// Created by Tiki Lobel on 12/13/16.
//

#ifndef EX3_STANDARDCAB_H
#define EX3_STANDARDCAB_H


#include "Taxi.h"

class StandardCab: public Taxi {
public:
    StandardCab() {};
    StandardCab(int id, char type, char c) :Taxi(id,type,c) {

    }
    //~Taxi(){};
    void updateKms(){};
    int getSpeed(){};
    void getManu(){};
    int getTariff(){};
    int getId() {};
    int getKms(){};
};


#endif //EX3_STANDARDCAB_H
