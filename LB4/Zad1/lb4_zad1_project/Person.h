//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Person.h
//  @ Date : 23.03.2023
//  @ Author :
//
//

#include <vector>
#include "Bicycle.h"

#if !defined(_PERSON_H)
#define _PERSON_H

using namespace std;

class Person {
public:
	Person(string firstName, string lastName, int age);
	string getFirstName();
	void setFirstName(string name);
	string getLastName();
	void setLastName(string name);
	int getAge();
	void setAge(int age);
	Bicycle* getBicycle(int serialNumber);
	void addBicycle(Bicycle* bicycle);
	void removeBicycle(int serialNumber);
	void printData();
private:
	string first_name;
	string last_name;
	int age;
	vector<Bicycle*> owned_bicycles;
};

#endif  //_PERSON_H
