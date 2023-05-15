//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bicycle.h
//  @ Date : 23.03.2023
//  @ Author :
//
//

#include <iostream>
#include <string>
#if !defined(_BICYCLE_H)
#define _BICYCLE_H

using namespace std;

class Bicycle {
public:
	Bicycle(int serialNumber, string make, string type, string colour);
	int getSerialNumber();
	void setSerialNumber(int serialNumber);
	string getMake();
	void setMake(string make);
	string getType();
	void setType(string type);
	string getColour();
	void setColour(string colour);
	void printData();
private:
	int serial_number;
	string make;
	string type;
	string colour;
};

#endif  //_BICYCLE_H