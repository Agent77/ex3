
#include "TaxiCenter.h"
#include "Driver.h"
using namespace std;
TaxiCenter::TaxiCenter() {

}
//Checks BFS to find the closest driver to passenger source
Driver TaxiCenter::findClosestDriver(Trip t) {

}

void TaxiCenter::addDriver(Driver d) {

}

void TaxiCenter::setTaxiLocations(Point p[]) {
       locations = p;
}

void TaxiCenter::addTrip(int tripId, int xStart, int yStart, int xEnd, int yEnd,
                         int numPassengers, double tariff) {
    Trip* trip = new Trip (tripId, xStart, yStart,xEnd,yEnd,numPassengers,tariff);
    trips.push_back(*trip);
}

void TaxiCenter::updateMeters() {

}

int TaxiCenter::checkDestinations()  {
}

void TaxiCenter::setLocation(int index, Point location) {

}

void TaxiCenter::addDriver(int driverId, int age, char mStatus, int vehicleId, int exp) {
    Driver* driver = new Driver (driverId, age, mStatus, vehicleId, exp);
    drivers.push_back(*driver);
}

void TaxiCenter::requestDriverLocation(int driverId){
    vector<Driver>::iterator iter = drivers.begin();
    while((*(iter)).getDriverId() != driverId) {
        iter++;
    }
    cout<<(*(iter)).getTrip().getStart()<<endl;
}

int TaxiCenter::assignDrivers() {
    int count = 0;
    vector<Driver>::iterator driver = drivers.begin();
    vector<Trip>::iterator trip = trips.begin();
    while(driver != drivers.end()) {
        (*(driver)).setTrip((*(trip)));
        driver++;
        trip++;
        count++;
    }
    return count;
}

vector <Driver> TaxiCenter::getDrivers (){
    return drivers;
}
