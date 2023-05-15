#include <iostream>
#include "Workroom.h"

using namespace std;

int main()
{
    Workroom* workroom = new Workroom(3, 346, 5);
    workroom->allWorkstations();
    cout << "\n\n";
    Computer* computers[3];
    for(int i = 0; i < 3; i++){
        computers[i] = new Computer("Windows 11");
        workroom->getWorkstation(i+1)->addComputer(computers[i]);
    }
    workroom->getWorkstation(2)->occupy();
    workroom->getWorkstation(3)->occupy();
    workroom->allWorkstations();
    cout << "\n\n";

    workroom->getWorkstation(3)->free();
    workroom->getWorkstation(3)->removeComputer();
    workroom->allWorkstations();

    delete workroom;
    return 0;
}
