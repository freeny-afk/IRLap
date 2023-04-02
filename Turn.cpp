class Turn {
private:
    double angle;   // угол поворота
    double length;  // длина поворота
public:
    Turn() : angle(0), length(0) {
    }  // конструктор по умолчанию
    Turn(double a, double l) : angle(a), length(l) {
    }  // конструктор с параметрами
    void Set_Angl(double a) { 
        angle = a; }  // установливаем угол поворота
    void Set_Len(double l) { 
        length = l; }  // установливаем длину поворота
    double Get_Angl() const { 
        return angle; }  // возвращаем угол поворота
    double Get_Len() const { 
        return length; }  // возвращаем длину поворота
};