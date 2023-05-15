#include <iostream>
#include "Person.h"
#include "Store.h"

using namespace std;

int main()
{
    Person* person1 = new Person("Jonathan", "Miles", 25);
    Person* person2 = new Person("Mark", "Stephenson", 46);
    Person* person3 = new Person("Clara", "Oswald", 29);
    Store store1("Johny's", "delicatessen");
    store1.addEmployee(person2);
    store1.addEmployee(person1);
    store1.addEmployee(person3);
    store1.printData();
    cout << "\n\n";
    store1.removeEmployee("Jonathan", "Miles");
    store1.printData();
    return 0;
}
