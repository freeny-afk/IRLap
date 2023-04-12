class Racemap {
private:
    std::vector<Turn> turns;  // list of track turns 
public:
    void AddTurn(Turn t) {
        turns.push_back(t); 
    }  // add turn into list
    double FindMaxSpeed(Car& car) {  // find max speed on track
        double v_max = car.Get_Vmax(); // max car speed is
        double accel1 = car.Get_Accel1(); // acc 0 to 100 km/h
        double accel2 = car.Get_Accel2(); // acc 100 to 0 km/h
        double mass = car.Get_Mass(); // car mass
        double speed = 0; // current car speed
        double time = 0; // current time on track
        double distance = 0; // current track distance

        for (int i = 0; i < turns.size(); i++) { // taking every turn
            double angle = turns[i].Get_Angl(); // turn angle
            double length = turns[i].Get_Len(); // turn length

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