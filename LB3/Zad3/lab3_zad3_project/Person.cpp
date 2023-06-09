//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Person.cpp
//  @ Date : 21/03/2023
//  @ Author :
//
//

#include <iostream>
#include "Person.h"

Person::Person(string firstName, string lastName, int age) {
    this->first_name = firstName;
    this->last_name = lastName;
    this->age = age;
}

string Person::getFirstName() {
    return first_name;
}

void Person::setFirstName(string name) {
    this->first_name = name;
}

string Person::getLastName() {
    return last_name;
}

void Person::setLastName(string name) {
    this->last_name = name;
}

int Person::getAge() {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::printData() {
    cout << "First name: " << first_name << "\nLast Name: " << last_name << "\nAge: " << age << "\n";
}

