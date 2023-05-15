//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : BikeRental.cpp
//  @ Date : 22/03/2023
//  @ Author :
//
//

#include <iostream>
#include "BikeRental.h"

BikeRental::BikeRental(string name) {
    this->name = name;
    bike = new Bike();
}

BikeRental::~BikeRental() {
    delete bike;
}

string BikeRental::getName() {
    return name;
}

void BikeRental::setName(string name) {
    this->name = name;
}

string BikeRental::getAddress() {
    return address;
}

void BikeRental::setAddress(string address) {
    this->address = address;
}

string BikeRental::getPhoneNumber() {
    return phone_number;
}

void BikeRental::setPhoneNumber(string phoneNumber) {
    this->phone_number = phoneNumber;
}

void BikeRental::printBikeData() {
    cout << "Bike: id - "<< bike->getId() << ", model - " << bike->getModel()
    << ", colour - " << bike->getColour() << "\n";
}

void BikeRental::setBikeData(int id, string model, string colour) {
    bike->setId(id);
    bike->setModel(model);
    bike->setColour(colour);
}

void BikeRental::printData() {
    cout << "Bike Rental\nName: " << name << "\nAddress: " << address
    << "\nPhone number: " << phone_number << "\n";
    printBikeData();
}

