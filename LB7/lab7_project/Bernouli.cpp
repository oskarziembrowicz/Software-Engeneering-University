//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bernouli.cpp
//  @ Date : 26/04/2023
//  @ Author :
//
//


#include "Bernouli.h"

Bernouli::Bernouli() {
    powerPtr = new Power();
    newtonPtr = new Newton();
}

Bernouli::~Bernouli() {
    delete powerPtr;
    delete newtonPtr;
}

long double Bernouli::bernouli(float p, int n, int k) {
    float q = 1 - p;
    return newtonPtr->newton(n, k) * powerPtr->power(p, k) * powerPtr->power(q, n-k);
}

