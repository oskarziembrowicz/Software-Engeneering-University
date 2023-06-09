//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Store.cpp
//  @ Date : 29/03/2023
//  @ Author :
//
//


#include "Store.h"

Store::Store(string name, string typeOfProducts) {
    this->store_name = name;
    this->type_of_products = typeOfProducts;
}

Store::~Store() {

}

string Store::getStoreName() {
    return store_name;
}

void Store::setStoreName(string name) {
    this->store_name = name;
}

string Store::getTypeOfProducts() {
    return type_of_products;
}

void Store::setTypeOfProducts(string typeOfProducts) {
    this->type_of_products = typeOfProducts;
}

void Store::addEmployee(Person* employee) {
    employees.push_back(employee);
}

void Store::removeEmployee(string firstName, string lastName) {
    for(int i = 0; i < employees.size(); i++){
        if(employees.at(i)->getFirstName() == firstName && employees.at(i)->getLastName() == lastName){
            employees.erase(employees.begin()+i);
            return;
        }
    }
}

void Store::printData() {
    cout << "Store Data:\nName: " << store_name << "\nType of sold products: " << type_of_products << "\nEmployees:\n";
    for(int i = 0; i< employees.size(); i++){
        employees.at(i)->printData();
    }
}

