
#include "Trip.h"

Trip::Trip() {

}

Trip::Trip(int tripId, int xStart, int yStart, int xEnd, int yEnd, int numOfPassengers, double tariff) {
    this->tripId=tripId;
    this->xStart=xStart;
    this->yStart=yStart;
    this->xEnd=xEnd;
    this->yEnd=yEnd;
    this->numOfPassengers=numOfPassengers;
    this->tariff=tariff;
}

Trip::~Trip() {

}

int Trip::getId() {

}

int Trip::getMeters() {

}

int Trip::getNumOfPassengers() {

}

int Trip::getTariff() {

}

Point Trip::getSource() {

}

Point Trip::getDest() {

}