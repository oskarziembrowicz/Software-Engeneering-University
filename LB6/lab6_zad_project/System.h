//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : System.h
//  @ Date : 13.04.2023
//  @ Author :
//
//

#include <vector>
#if !defined(_SYSTEM_H)
#define _SYSTEM_H

#include "User.h"


class System {
public:
	void login();
	void newRegister();
	void addUser(string id, string password);
private:
	vector<User*> user_list;
};

#endif  //_SYSTEM_H