class Turn {
private:
    double angle;   // angle of turn
    double length;  // length of turn
public:
    Turn() : angle(0), length(0) {
    }  // standart constructors
    Turn(double a, double l) : angle(a), length(l) {
    }  // constructors with parameters
    void Set_Angl(double a) { 
        angle = a; }  // set turn angle
    void Set_Len(double l) { 
        length = l; }  // set turn length
    double Get_Angl() const { 
        return angle; }  // return tern angle
    double Get_Len() const { 
        return length; }  // return turn length
};