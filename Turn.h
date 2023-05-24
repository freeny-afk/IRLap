#pragma once
#include <string>
class Turn {
private:
    double angle;   // angle of turn
    double length;  // length of turn
    int side;   // right, left or straight
public:
    Turn(); // standart constructors
    Turn(double a, double l); // constructors with parameters
    void Set_Angl(double a); // set turn angle
    void Set_Angl();

    void Set_Len(double l); // set turn length
    void Set_Len();

    void Set_Where(int sd); // set turn side
    void Set_Where();

    double Get_Angl() const; // return turn angle
    double Get_Len() const; // return turn length
    int Get_Where() const; // return side of turn
};