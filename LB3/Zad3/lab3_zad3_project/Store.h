//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Store.h
//  @ Date : 21/03/2023
//  @ Author :
//
//

#if !defined(_STORE_H)
#define _STORE_H

#include "Person.h"

class Store {
public:
	Store(string name, string typeOfProducts);
	string getName();
	void setName(string name);
	Person* getEmployee();
	void setEmployee(Person* person);
	string getTypeOfProducts();
	void setTypeOfProducts(string type);
	void printData();
private:
	string name;
	Person* employee;
	string type_of_products;
};

#endif  //_STORE_H
