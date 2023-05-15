//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.h
//  @ Date : 26/04/2023
//  @ Author :
//
//

#include "Factorial.h"

#if !defined(_NEWTON_H)
#define _NEWTON_H

class Newton {
public:
	Newton();
	~Newton();
	long double newton(int n, int k);
	long double newtonStandard(int n, int k);
private:
	Factorial* factorialPtr;
};

#endif  //_NEWTON_H
