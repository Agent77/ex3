
#include <string>
#include "Taxi.h"

Taxi::Taxi() {

}

//Taxi::~Taxi() {

//}

void Taxi::updateKms() {

}

int Taxi::getSpeed() {

}


void Taxi::getManu() {

}

int Taxi::getTariff() {

}

int Taxi::getId() {
return cabId;
}

Taxi::Taxi(int id, char type, char c) {
    cabId = id;
    manufacturer = type;
    color = c;
};