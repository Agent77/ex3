#ifndef EX2_DRIVER_H
#define EX2_DRIVER_H

#include <vector>
#include "Trip.h"
#include "Passenger.h"
#include "Taxi.h"
class Driver {
private:
    int driverId;
    int age;
    int numberOfcustomers;
    int vehicleId;
    int exp;
    double totalRate;
    double avgSatisfaction;
    char maritalStatus;
    Graph* gps;
    Taxi taxi;
    Trip myTrip;
    std::vector <Passenger> myPassengers;
public:
    Driver();
    ~Driver();
    Driver(int driverId, int age, char mStatus, int vehicleId, int exp, Graph* gps);
    Driver(int driverId, int age, char mStatus, int vehicleId, int exp);
    int getAge();
    int getvehicleId() { return vehicleId;};
    int getDriverId();
    double getSatisfaction();
    Taxi getTaxi();
    Trip getTrip();
    vector <Passenger> getPassengers();
    char getMaritalStatus();
    void setTaxi(Taxi t);
    void setTrip(Trip t);
    void rateMe(int rating);
    void addPassenger(Passenger p);
    void drive(); //TODO update trip at end




};


#endif //EX2_DRIVER_H
