#include "City.h"
City::City() {

}
City::City(BFS* map) {
    this->map = map;
}
void City::CallTaxiCenter(Passenger p) {

}
Passenger City::checkForPassengerCalls() {

}

void City::startTraffic() {
    int driverCount = tc.assignDrivers();
    std::vector<Trip>::iterator trip = tc.getTrips().begin();
    //loop
    for(int driver = 0; driver <driverCount; driver++) {
        //(*(trip)).getStart()
    }
    map.getpath();
}