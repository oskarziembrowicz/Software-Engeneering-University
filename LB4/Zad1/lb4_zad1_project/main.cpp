#include <iostream>
#include <string>
#include <vector>
#include "Bicycle.h"
#include "Person.h"

using namespace std;

int main()
{
    Person person("John", "Stevenson", 32);
    Bicycle* bike1 = new Bicycle(12345, "Turbo Bikes", "offroad", "black");
    person.addBicycle(bike1);
    person.printData();
    cout << "\n\n";

    Bicycle* bike2 = new Bicycle(22343, "Maxis", "cross", "orange");
    person.addBicycle(bike2);
    person.printData();
    cout << "\n\n";

    person.removeBicycle(12345);
    person.printData();
    return 0;
}
