#include <iostream>
#include <string>
#include "Person.h"
#include "Store.h"

using namespace std;

int main()
{
    Person person1("Mark", "Donald", 30);
    Store store1("Jamie's Store", "IT");
    store1.setEmployee(&person1);
    cout << "Store:\n";
    store1.printData();
    return 0;
}
