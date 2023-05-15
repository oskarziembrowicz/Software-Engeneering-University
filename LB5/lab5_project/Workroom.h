//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Workroom.h
//  @ Date : 30/03/2023
//  @ Author :
//
//

#include <vector>
#include "Workstation.h"

#if !defined(_WORKROOM_H)
#define _WORKROOM_H


class Workroom {
public:
	Workroom(int floorNumber, int roomNumber, int numberOfWorkstations);
	~Workroom();
	int getFloorNumber();
	int getRoomNumber();
	int getNumberOfWorkstations();
	Workstation* getWorkstation(int number);
	// nie ma potrzeby ustawia� numeru pi�tra, pokoju ani liczby stanowisk
	// nie da si� ich i tak zmieni� po utworzeniu pokoju
	void workstationData(int number);
	void allWorkstations();
private:
	int floor_number;
	int room_number;
	int number_of_workstations;
	vector<Workstation*> workstations;
};

#endif  //_WORKROOM_H
