
#ifndef EX2_TAXI_H
#define EX2_TAXI_H

#include <string>
#include "BFS.h"

class Taxi {
private:
    BFS* gps;
    int cabId;
    int kmPassed;
    int manufacturer;
    int color;
    int tariff;
    int speed;
    bool luxury;

public:
    Taxi();
    Taxi(int id, int lux, char type, char color);
    ~Taxi();
    void updateKms();
    int getSpeed();
    void getManu();
    int getTariff();
    int getId();
    int getKms(){};
};


#endif //EX2_TAXI_H
