class Turn {
private:
    double angle;   // ���� ��������
    double length;  // ����� ��������
public:
    Turn() : angle(0), length(0) {
    }  // ����������� �� ���������
    Turn(double a, double l) : angle(a), length(l) {
    }  // ����������� � �����������
    void Set_Angl(double a) { 
        angle = a; }  // ������������� ���� ��������
    void Set_Len(double l) { 
        length = l; }  // ������������� ����� ��������
    double Get_Angl() const { 
        return angle; }  // ���������� ���� ��������
    double Get_Len() const { 
        return length; }  // ���������� ����� ��������
};