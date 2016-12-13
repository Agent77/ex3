//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TAXICENTER_H
#define EX2_TAXICENTER_H

#include "Trip.h"
#include "Driver.h"
#include "Point.h"


class TaxiCenter {
private:
    std::vector <Driver> drivers;
    Point* locations;
    std::vector <Trip> trips;
public:
    TaxiCenter();
    Driver findClosestDriver(Trip t);
    void setLocation(int index, Point location);
    void setTaxiLocations(Point p[]);
    void addTrip(Passenger p);
    void updateMeters();
    int checkDestinations();
    Point* getLocations() { return locations;}
    Trip* getTrips(){ return trips;};
    void addDriver(int driverId, int age, char mStatus, int id, int exp, int carId);
    void addTrip(int tripId, int xStart, int yStart, int xEnd, int yEnd,
                 int numPassengers, double tariff);
    void requestDriverLocation(int driverId);

};


#endif //EX2_TAXICENTER_H
