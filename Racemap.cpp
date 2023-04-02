class Racemap {
private:
    std::vector<Turn> turns;  // ������ ��������� �� ������
public:
    void AddTurn(Turn t) {
        turns.push_back(t); 
    }  // �������� ������� �� ������
    double FindMaxSpeed(const Car& car) const {  // ����� ������������ �������� �� ������ ��� ��������� ��������������
        double v_max = car.Get_Vmax(); // ������������ �������� ����������
        double accel1 = car.Get_Accel1(); // ��������� ���������� �� 0 �� 100 ��/�
        double accel2 = car.Get_Accel2(); // ��������� ���������� �� 100 �� 0 ��/�
        double mass = car.Get_Mass(); // ����� ����������
        double speed = 0; // ������� �������� ����������
        double time = 0; // ������� ����� �� ������
        double distance = 0; // ������� ���������� �� ������

        for (int i = 0; i < turns.size(); i++) { // ���������� ��� �������� �� ������
            double angle = turns[i].Get_Angl(); // ���� ��������
            double length = turns[i].Get_Len(); // ����� ��������

            // ��������� ������������ ��������, ������� ����� ������� ���������� �� ������ ��������
            double v_turn = sqrt((mass * accel1 * length * sin(angle)) / (0.5 * mass * cos(angle) + mass * sin(angle) * (1 / accel2 - 1 / accel1)));

            // ���������, �� ��������� �� ������������ �������� ���������� ������������ �������� �� ������ ��������
            if (v_turn < v_max) {speed = v_turn;}
            else {speed = v_max;}

            // ��������� �����, �� ������� ���������� �������� ������ �������
            double time_turn = (length / speed) + (accel1 / (2 * length * sin(angle))) + (accel2 / (2 * length * sin(angle)));

            // ����������� ������� ����� �� �����, �� ������� ���������� �������� ������ �������
            time += time_turn;

            // ��������� ����������, ������� ������ ���������� �� ������ ��������
            distance += length;
        }

        // ��������� ������������ ��������, ������� ����� ������� ���������� �� ������
        double v_max_track = (distance * 1000) / (time * 3600);

        // ���������, �� ��������� �� ������������ �������� ���������� ������������ �������� �� ������
        if (v_max_track < v_max) {
            return v_max_track;
        }
        else {
            return v_max;
        }
    }
};