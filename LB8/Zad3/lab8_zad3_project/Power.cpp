//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Power.cpp
//  @ Date : 09/05/2023
//  @ Author :
//
//


#include "Power.h"

long double Power::power(float base, int index) {
    if(index == 0) {
        return 1;
    }
    return base * power(base, index-1);
}

long double Power::powerIter(float base, int index) {
    long double result = 1;
    for(int i = 0 ; i < index; i++) {
        result *= base;
    }
    return result;
}

