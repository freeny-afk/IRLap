class Car {
private:
    double acceleration1;  // ��������� �� 0 �� 100 ��/� � ��������
    double acceleration2;  // ��������� �� 100 �� 0 ��/� � ��������
    double vmax;           // ������������ �������� ���������� � ��/�
    double mass;           // ����� ���������� � ��
public:
    Car() : acceleration1(0), acceleration2(0), vmax(0), mass(0) {
    }  // ����������� �� ���������
    Car(double a1, double a2, double v, double m) : acceleration1(a1), acceleration2(a2), vmax(v), mass(m) {
    }  // ����������� � �����������
    void Set_Spd(double s) { 
        vmax = s; }  // ������������� ������������ ��������
    void Set_AU(double a) { 
        acceleration1 = a; }  // ������������� ��������� �� 0 �� 100 ��/�
    void Set_AD(double a) { 
        acceleration2 = a; }  // ������������� ��������� �� 100 �� 0 ��/�
    void Set_Vmax(double v) { 
        vmax = v; }  // ������������� ������������ ��������
    void Set_Mass(double m) { 
        mass = m; }  // ������������� ����� ����������
    double Get_Accel1() const {
        return acceleration1; }  // ���������� ��������� �� 0 �� 100 ��/�
    double Get_Accel2() const { 
        return acceleration2; }  // ���������� ��������� �� 100 �� 0 ��/�
    double Get_Vmax() const { 
        return vmax; }  // ���������� ������������ ��������
    double Get_Mass() const { 
        return mass; }  // ���������� ����� ����������
};