#ifndef EX2_TRIP_H
#define EX2_TRIP_H

#include "Point.h"
class Trip {

private:

    int tripId;
    int xStart;
    int yStart;
    int xEnd;
    int yEnd;
    int numOfPassengers;
    int metersPassed;
    double tariff;

public:
    Trip();
    Trip(int tripId, int xStart, int yStart, int xEnd, int yEnd, int numOfPassengers, double tariff);
    ~Trip();
    int getId();
    int getMeters();
    int getNumOfPassengers();
    int getTariff();
    void addMeters(){};

};


#endif //EX2_TRIP_H
