class Car {
private:
    double acceleration1;  // ускорение от 0 до 100 км/ч в секундах
    double acceleration2;  // ускорение от 100 до 0 км/ч в секундах
    double vmax;           // максимальная скорость автомобиля в км/ч
    double mass;           // масса автомобиля в кг
public:
    Car() : acceleration1(0), acceleration2(0), vmax(0), mass(0) {
    }  // конструктор по умолчанию
    Car(double a1, double a2, double v, double m) : acceleration1(a1), acceleration2(a2), vmax(v), mass(m) {
    }  // конструктор с параметрами
    void Set_Spd(double s) { 
        vmax = s; }  // установливаем максимальную скорость
    void Set_AU(double a) { 
        acceleration1 = a; }  // установливаем ускорение от 0 до 100 км/ч
    void Set_AD(double a) { 
        acceleration2 = a; }  // установливаем ускорение от 100 до 0 км/ч
    void Set_Vmax(double v) { 
        vmax = v; }  // установливаем максимальную скорость
    void Set_Mass(double m) { 
        mass = m; }  // установливаем массу автомобиля
    double Get_Accel1() const {
        return acceleration1; }  // возвращаем ускорение от 0 до 100 км/ч
    double Get_Accel2() const { 
        return acceleration2; }  // возвращаем ускорение от 100 до 0 км/ч
    double Get_Vmax() const { 
        return vmax; }  // возвращаем максимальную скорость
    double Get_Mass() const { 
        return mass; }  // возвращаем массу автомобиля
};