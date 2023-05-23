#pragma once
#include "Car.h"
#include "Turn.h"
#include "Racemap.h"
#include <string>
#include <vector>
#include <iostream>


    Racemap::Racemap() {}
    void Racemap::GetName() {
        std::cout << "Игора Драйв|";
    }
    void Racemap::SetName() {
        std::cin >> nm;
    }
    std::string Racemap::GetUsName() {
        return nm;
    }
    void Racemap::AddTurn(Turn t) {
        turns.push_back(t);
    }  // add turn into vector
    void Racemap::TurnSpeed(Car &PoloR2) {
        int s = turns.capacity();
        double atime = PoloR2.Get_Accel1(); // average a 0-100 in seconds on track
        double a = 27.78 / atime;  // count acc in m/sec^2     
        for (i = 0; i < s; i++) {            
                deg = turns[i].Get_Angl();
                l = turns[i].Get_Len();
                alpha = 3.14 * deg / 180;
                r = l / alpha;
                if (turns[i].Get_Where() == 1 or turns[i].Get_Where() == 3) {
                    vmaxs.push_back(sqrt(mu * r * 9.8) * 18 / 5);
                }
                else vmaxs.push_back(sqrt(mu * 2 * l * a) * 18 / 5);
        }
        for (j = 0; j < s; j++) {
            if (j + 1 == s) {
                whturn = turns[0].Get_Where();
            }
            else {
                whturn = turns[j + 1].Get_Where();
            }
                if (whturn == 1) {
                    if (turns[j].Get_Where() == 1) {
                        std::cout << "В правом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "направляйте машину направо внутрь поворота к поребрику, а затем к левой части поворота \n";
                    }
                    else if (turns[j].Get_Where() == 2) {
                        std::cout << "На прямой " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "придерживайтесь левой части прямой, войдите в поворот через поребрик \n";
                    }
                    else if (turns[j].Get_Where() == 3) {
                        std::cout << "В левом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "переместитесь в центр поворота, готовьтесь к правому повороту \n";
                    }
                }
                else if (whturn == 2) {
                    if (turns[j].Get_Where() == 1) {
                        std::cout << "В правом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "направляйте машину на расширение через поребрик к левой части прямой \n";
                    }
                    else if (turns[j].Get_Where() == 2) {
                        std::cout << "На прямой " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "придерживайтесь направления выхода из предыдущего поворота \n";
                    }
                    else if (turns[j].Get_Where() == 3) {
                        std::cout << "В левом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "направляйте машину на расширение через поребрик к правой части прямой \n";
                    }
                }
                else if (whturn == 3) {
                    if (turns[j].Get_Where() == 1) {
                        std::cout << "В правом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "переместитесь в центр поворота, готовьтесь к левому повороту \n";
                    }
                    else if (turns[j].Get_Where() == 2) {
                        std::cout << "На прямой " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "придерживайтесь правой части прямой, войдите в поворот через поребрик \n";
                    }
                    else if (turns[j].Get_Where() == 3) {
                        std::cout << "В левом повороте " << j + 1 << " со скоростью ";
                        std::cout << vmaxs[j] << " км/ч ";
                        std::cout << "переместитесь в центр поворота, готовьтесь к левому повороту \n";
                    }
                }
            }
        }
        
   