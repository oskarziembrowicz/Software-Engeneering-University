#include <iostream>
#include "Bike.h"
#include "BikeRental.h"

using namespace std;

int main()
{
    BikeRental* bikeRental = new BikeRental("Wheel Deal", 126782, "Bikers", "black");
    bikeRental->setAddress("Velvet Street 56");
    bikeRental->setPhoneNumber("567890123");
    bikeRental->printData();
    cout << "\n\n";

    Bike* bike1 = new Bike(321098, "Racers", "red");
    Bike* bike2 = new Bike(674890, "Bikers", "yellow");
    bikeRental->addBike(bike1);
    bikeRental->addBike(bike2);
    bikeRental->printData();

    delete bikeRental;
    return 0;
}
