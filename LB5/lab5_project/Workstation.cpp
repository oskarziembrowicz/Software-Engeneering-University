//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Workstation.cpp
//  @ Date : 30/03/2023
//  @ Author :
//
//


#include "Workstation.h"

Workstation::Workstation(int number) {
    this->number = number;
    occupied = false;
    equipped_with_computer = false;
    computer = nullptr;
}

Workstation::~Workstation() {
    if (equipped_with_computer){
        computer->disconnectFromNetwork();
    }
}

int Workstation::getWorkstationNumber() {
    return number;
}

void Workstation::setWorkstationNumber(int number) {
    this->number = number;
}

bool Workstation::isOccupied() {
    return occupied;
}

void Workstation::occupy() {
    occupied = true;
}

void Workstation::free() {
    occupied = false;
}

bool Workstation::isEquippedWithComputer() {
    return equipped_with_computer;
}

void Workstation::addComputer(Computer* computerPtr) {
    equipped_with_computer = true;
    computer = computerPtr;
    computer->connectToNetwork();
}

void Workstation::removeComputer() {
    equipped_with_computer = false;
    computer->disconnectFromNetwork();
    computer = nullptr;
}

void Workstation::printData() {
    cout << "Workstation number - " << number << ", Equipped with computer - "
    << equipped_with_computer << ", Occupied - " << occupied << "\n";
    if(equipped_with_computer){
        computer->printData();
    }
}

