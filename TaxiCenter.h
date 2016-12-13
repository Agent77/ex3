//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TAXICENTER_H
#define EX2_TAXICENTER_H

#include "Trip.h"
#include "Driver.h"
#include "Point.h"
#include <vector>

using namespace std;

class TaxiCenter {
private:
    std::vector<Driver> drivers;
    Point* locations;
    std::vector<Trip> trips;
public:
    TaxiCenter();
    Driver findClosestDriver(Trip t);
    void addDriver(int driverId, int age, char mStatus, int vehicleId, int exp);
        void setLocation(int index, Point location);
    void setTaxiLocations(Point p[]);
    void addTrip(Passenger p);
    void addDriver(Driver d);
    void updateMeters();
    int checkDestinations();
    Point* getLocations() { return locations;}
    vector<Trip> getTrips(){ return trips;};
    void addDriver(int driverId, int age, char mStatus, int id, int exp, int carId);
    void addTrip(int tripId, int xStart, int yStart, int xEnd, int yEnd,
                 int numPassengers, double tariff);
    void requestDriverLocation(int driverId);
    int assignDrivers();
    vector <Driver> getDrivers ();

};


#endif //EX2_TAXICENTER_H
