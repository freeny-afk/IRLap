#pragma once
class Car {
private:
    double vcur;           // current car speed in km/h
    double acceleration1;  // acceleration 0 - 100 km/h in seconds
    double acceleration2;  // acceleration 100 - 0 km/h in seconds
    double vmax;           // max car speed â km/h
    double mass;           // car mass in kilos
public:
    Car(); // standart constructor
    Car(double a1, double a2, double v, double m); // parametred constructor
    void Set_AU(double a); // set acceleration 0 - 100 km/h in seconds
    void Set_AU();
    void Set_Vmax(double v); // set max car speed â km/h
    void Set_Vmax();
    double Get_Accel1() const; // return acceleration 0 - 100 km/h in seconds
    double Get_Vmax() const; // return max car speed â km/h
};