//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Person.cpp
//  @ Date : 29/03/2023
//  @ Author :
//
//


#include "Person.h"

Person::Person(string first_name, string last_name, int age) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
}

Person::~Person() {

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
    cout << "First name - " << first_name << ", Last name - "
    << last_name << ", Age - " << age << "\n";
}

