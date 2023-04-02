class Racemap {
private:
    std::vector<Turn> turns;  // список поворотов на трассе
public:
    void AddTurn(Turn t) {
        turns.push_back(t); 
    }  // добавить поворот на трассу
    double FindMaxSpeed(const Car& car) const {  // найти максимальную скорость на трассе для заданного автоавтомобиля
        double v_max = car.Get_Vmax(); // максимальная скорость автомобиля
        double accel1 = car.Get_Accel1(); // ускорение автомобиля от 0 до 100 км/ч
        double accel2 = car.Get_Accel2(); // ускорение автомобиля от 100 до 0 км/ч
        double mass = car.Get_Mass(); // масса автомобиля
        double speed = 0; // текущая скорость автомобиля
        double time = 0; // текущее время на трассе
        double distance = 0; // текущее расстояние на трассе

        for (int i = 0; i < turns.size(); i++) { // перебираем все повороты на трассе
            double angle = turns[i].Get_Angl(); // угол поворота
            double length = turns[i].Get_Len(); // длина поворота

            // Вычисляем максимальную скорость, которую может достичь автомобиль на данном повороте
            double v_turn = sqrt((mass * accel1 * length * sin(angle)) / (0.5 * mass * cos(angle) + mass * sin(angle) * (1 / accel2 - 1 / accel1)));

            // Проверяем, не превышает ли максимальная скорость автомобиля максимальную скорость на данном повороте
            if (v_turn < v_max) {speed = v_turn;}
            else {speed = v_max;}

            // Вычисляем время, за которое автомобиль проходит данный поворот
            double time_turn = (length / speed) + (accel1 / (2 * length * sin(angle))) + (accel2 / (2 * length * sin(angle)));

            // Увеличиваем текущее время на время, за которое автомобиль проходит данный поворот
            time += time_turn;

            // Вычисляем расстояние, которое прошел автомобиль на данном повороте
            distance += length;
        }

        // Вычисляем максимальную скорость, которую может достичь автомобиль на трассе
        double v_max_track = (distance * 1000) / (time * 3600);

        // Проверяем, не превышает ли максимальная скорость автомобиля максимальную скорость на трассе
        if (v_max_track < v_max) {
            return v_max_track;
        }
        else {
            return v_max;
        }
    }
};