//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.h
//  @ Date : 09/05/2023
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
	long double newton(int n, int k, Factorial* factorialPtr);
	long double newtonStandard(int n, int k, Factorial* factorialPtr);
};

#endif  //_NEWTON_H
