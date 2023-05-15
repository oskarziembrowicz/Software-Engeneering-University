#include <iostream>
#include "Builder.h"
#include "Mechanic.h"

using namespace std;

int main()
{
    Builder builder1("Michael", 5);
    Mechanic mechanic1("John", 7);

    cout << "Builder's name: " << builder1.getName() << "\n";
    cout << "Builder's years of experience: " << builder1.getYearsOfExperience() << "\n";
    cout << "Builder at work\n";
    builder1.useAHammer();
    builder1.useAScrewdriver();
    builder1.useAWelder();
    cout << "\n";

    cout << "Mechanic's name: " << mechanic1.getName() << "\n";
    cout << "Mechanic's years of experience: " << mechanic1.getYearsOfExperience() << "\n";
    cout << "Mechanic at work\n";
    mechanic1.useAnalisysDevice();
    mechanic1.useAWelder(&builder1);
}
