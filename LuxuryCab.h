//
// Created by Tiki Lobel on 12/13/16.
//

#ifndef EX3_LUXURYCAB_H
#define EX3_LUXURYCAB_H


#include "Taxi.h"

class LuxuryCab: public Taxi {
public:
    LuxuryCab(int id, char type, char c){};

    void updateKms(){};
    int getSpeed(){};
    void getManu(){};
    int getTariff(){};
    int getId() {};
    int getKms(){};
};


#endif //EX3_LUXURYCAB_H
