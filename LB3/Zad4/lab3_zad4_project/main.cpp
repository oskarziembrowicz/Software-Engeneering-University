#include <iostream>
#include <string>
#include "BikeRental.h"
#include "Bike.h"

using namespace std;

int main()
{
    BikeRental* bike_rental = new BikeRental("Tom's Rental");
    bike_rental->setAddress("Baker Street 26");
    bike_rental->setPhoneNumber("567899123");
    bike_rental->setBikeData(12, "Top Racer", "red");
    bike_rental->printData();

    delete bike_rental;

    return 0;
}
