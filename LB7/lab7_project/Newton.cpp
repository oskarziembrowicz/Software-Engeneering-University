//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.cpp
//  @ Date : 26/04/2023
//  @ Author :
//
//


#include "Newton.h"

Newton::Newton() {
    factorialPtr = new Factorial();
}

Newton::~Newton() {
    delete factorialPtr;
}

long double Newton::newton(int n, int k) {
    int N = n - k;
    int NbyK = 1;

    if(k >= N) {
        for(int i=k+1; i<=n; i++){
            NbyK *= i;
        }
        return NbyK/factorialPtr->factorial(N);
    } else {
        for(int i = N+1; i <= n; i++) {
            NbyK *= i;
        }
        return NbyK/factorialPtr->factorial(k);
    }
}

long double Newton::newtonStandard(int n, int k) {
    return factorialPtr->factorial(n) / (factorialPtr->factorial(k) * factorialPtr->factorial(n-k));
}

