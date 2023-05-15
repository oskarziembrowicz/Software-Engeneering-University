#include <iostream>
#include <string>
#include "Person.h"
#include "Car.h"

using namespace std;

int main()
{
    Person person1("Mark", "Stevenson", 45);
    Car car1("Renault", "Megane");
    person1.setCar(&car1);
    cout << "--Person--\n";
    person1.printData();
    cout << "--Car--\n";
    person1.getCar()->printData();

    return 0;
}
