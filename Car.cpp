#pragma once
#include "Car.h"
#include <iostream>
    Car::Car() : vcur(0), acceleration1(0), acceleration2(0), vmax(200), mass(0) {
    }  // standart constructor
    Car::Car(double a1, double a2, double v, double m) : acceleration1(a1), acceleration2(a2), vmax(v), mass(m) {
    }  // parametred constructor

    void Car::Set_AU(double a) {
        acceleration1 = a; }  // set acceleration 0 - 100 km/h in seconds
    void Car::Set_AU() {
        std::cin >> acceleration1; }

    void Car::Set_Vmax(double v) {
        vmax = v; }  // set max car speed â km/h
    void Car::Set_Vmax() {
        std::cin >> vmax; }

    double Car::Get_Accel1() const {
        return acceleration1; }  // return acceleration 0 - 100 km/h in seconds
    double Car::Get_Vmax() const {
        return vmax; }  // return max car speed â km/h