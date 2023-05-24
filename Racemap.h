#pragma once
#include "Car.h"
#include "Turn.h"
#include <string>
#include <vector>
#include <iostream>


class Racemap {
private:
    std::vector<Turn> turns;  // list of track turns 
    std::vector<double> vmaxs;  // list of max vs 
    int i = 0;
    int j = 0;
    int whturn;
    double g = 9.81; // g(a) of free fall
    double mu = 0.95;
    double deg;
    double l; // turn length
    double alpha;
    double r;
    double vmax; // max v in the turn
    std::string nm;
public:
    Racemap();
    void GetName(); //name of autodrome
    std::string GetUsName();
    void SetName();
    void AddTurn(Turn t);  // add turn into vector
    void TurnSpeed(Car& PoloR2);
};