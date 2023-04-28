#include "Car.cpp";
#include "Turn.cpp";
#include <vector>
#include <iostream>
class Racemap {
private:
    std::vector<Turn> turns;  // list of track turns 
public:
    Racemap() {}
    void AddTurn(Turn t) {
        turns.push_back(t);
    }  // add turn into vector

    double TurnSpeed() {
        double mass = 1050; // car mass
        double speed = 100.0; // current car speed
        double time = 0; // current time on track
        double g = 9.81; // a free fall
        double L = 200.0; // turn length
        double mu = 0.95;
        double deg = 30;
        double alpha = 3.14 * deg / 180;

        // count acc in the turn
        double a = mu * g * cos(alpha) - (mass * pow(speed, 2)) / (L * tan(alpha));

        // count max v in the turn
        double v = sqrt(mu * g * L * tan(alpha) / (1 - (a / (mu * g)) * tan(alpha))) + speed;

        return v;
    }
};