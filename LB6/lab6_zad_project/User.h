//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : User.h
//  @ Date : 13.04.2023
//  @ Author :
//
//

#include <string>
#include <iostream>
#if !defined(_USER_H)
#define _USER_H

using namespace std;

class User {
public:
	User(string id, string password);
	string getIdentifier();
	void setIdentifier(string id);
	string getPassword();
	void setPassword(string password);
private:
	string identifier;
	string password;
};

#endif  //_USER_H