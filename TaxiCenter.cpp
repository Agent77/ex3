//
// Created by Tiki Lobel on 11/29/16.
//

#include "TaxiCenter.h"
#include "Driver.h"
using namespace std;
TaxiCenter::TaxiCenter() {

}
//Checks BFS to find the closest driver to passenger source
Driver TaxiCenter::findClosestDriver(Trip t) {

}

void TaxiCenter::setTaxiLocations(Point p[]) {
       locations = p;
}

void TaxiCenter::addTrip(int tripId, int xStart, int yStart, int xEnd, int yEnd,
                         int numPassengers, double tariff) {
    Trip trip = new Trip (tripId, xStart, yStart,xEnd,yEnd,numPassengers,tariff);
    trips.push_back(trip);
}

void TaxiCenter::updateMeters() {

}

int TaxiCenter::checkDestinations()  {
}

void TaxiCenter::setLocation(int index, Point location) {

}

void TaxiCenter::addDriver(int driverId, int age, char mStatus, int vehicleId, int exp) {
    Driver driver = new Driver (driverId, age, mStatus, vehicleId, exp);
    drivers.push_back(driver);
}

void TaxiCenter::requestDriverLocation(int driverId){

}
