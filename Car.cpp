class Car {
private:
    double acceleration1;  // acceleration 0 - 100 km/h in seconds
    double acceleration2;  // acceleration 100 - 0 km/h in seconds
    double vmax;           // max car speed â km/h
    double mass;           // car mass in kilos
public:
    Car() : acceleration1(0), acceleration2(0), vmax(0), mass(0) {
    }  // standart constructor
    Car(double a1, double a2, double v, double m) : acceleration1(a1), acceleration2(a2), vmax(v), mass(m) {
    }  // parametred constructor
    void Set_Spd(double s) { 
        vmax = s; }  // set max speed
    void Set_AU(double a) { 
        acceleration1 = a; }  // set acceleration 0 - 100 km/h in seconds
    void Set_AD(double a) { 
        acceleration2 = a; }  // set acceleration 100 - 0 km/h in seconds
    void Set_Vmax(double v) { 
        vmax = v; }  // set max car speed â km/h
    void Set_Mass(double m) { 
        mass = m; }  // set car mass in kilos
    double Get_Accel1() const {
        return acceleration1; }  // return acceleration 0 - 100 km/h in seconds
    double Get_Accel2() const { 
        return acceleration2; }  // return acceleration 100 - 0 km/h in seconds
    double Get_Vmax() const { 
        return vmax; }  // return max car speed â km/h
    double Get_Mass() const { 
        return mass; }  // return car mass in kilos
};