//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Computer.h
//  @ Date : 30/03/2023
//  @ Author :
//
//

#include <iostream>
#include <string>

#if !defined(_COMPUTER_H)
#define _COMPUTER_H

using namespace std;

class Computer {
public:
	Computer(string operatingSystem);
	string getOperatingSystem();
	void setOperatingSystem(string os);
	bool isConnectedToNetwork();
	void connectToNetwork();
	void disconnectFromNetwork();
	void printData();
private:
	string operating_system;
	bool connected_to_network;
};

#endif  //_COMPUTER_H
