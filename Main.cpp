#pragma once
#include "Car.h"
#include "Turn.h"
#include "Racemap.h"
#include <vector>
#include <iostream>

int main() {
	int i, c = 1, kuda;
	char cas;
	std::vector<Turn> turn;
	Car PoloR2;
	Turn one, two, three;
	Racemap Igora;
	setlocale(LC_ALL, "Russian");
	std::cout << "          ________________________|Добро пожаловать в IRLap v0.1|________________________\n";
	std::cout << "          |                                                                             |\n";
	std::cout << "          |      Программа направлена на нахождение идеальной скорости и траектории     |\n";
	std::cout << "          |    для прохождения гоночного круга. Для работы программы от пользователя    |\n";
	std::cout << "          |   требуется ввести количество поворотов на треке, параметры каждого из них  |\n";
	std::cout << "          |      и некоторые параметры автомобиля. Траектория выводится для каждого     |\n";
	std::cout << "          |    поворота в виде: направления поворота, максимально возможной скорости    |\n";
	std::cout << "          |     автомобиля в повороте в км/ч и его необходимого положения на треке.     |\n";
	std::cout << "          |_____________________________________________________________________________|\n\n\n";
	std::cout << "                Для отображения примера работы программы введите 1, для оперирования\n";
	std::cout << "                                  собственными данными введите 2: ";
	std::cin >> cas;
	switch (cas) {
		case '1':
			system("cls");
			std::cout << "                                      |Автодром ";
			Igora.GetName();
			std::cout << "\n\n";
			PoloR2.Set_AU(5);
			one.Set_Where(1);
			one.Set_Angl(50);
			one.Set_Len(200);
			two.Set_Where(3);
			two.Set_Angl(60);
			two.Set_Len(200);
			three.Set_Where(2);
			three.Set_Len(200);
			Igora.AddTurn(one);
			Igora.AddTurn(two);
			Igora.AddTurn(three);
			Igora.TurnSpeed(PoloR2);
			break;
		case '2':
			system("cls");
			std::cout << "Введите параметры автомобиля: \n\n";
			std::cout << "Ускорение 0 - 100 км/ч в секундах = "; 
			PoloR2.Set_AU();
			std::cout << "Максимальная скорость автомобиля в км/ч = ";
			PoloR2.Set_Vmax();
			std::cout << "\nВведите параметры трассы: \n";
			std::cout << "Название трассы ";
			Igora.SetName();
			std::cout << "\nКоличество поворотов трассы = ";
			std::cin >> c;
			for (i = 0; i < c; i++) {
				turn.push_back(one);
				system("cls");
				std::cout << "Введите направление поворота" << " №" << i + 1 << ", где 1 - правый поворот, \n";
				std::cout << "2 - прямая, 3 - левый поворот: ";
				turn[i].Set_Where();
				if (turn[i].Get_Where() == 1 or turn[i].Get_Where() == 3) {
					std::cout << "\nВведите длину поворота: ";
					turn[i].Set_Len();
					std::cout << "\nВведите угол поворота: ";
					turn[i].Set_Angl();
					Igora.AddTurn(turn[i]);
					system("cls");
				}
				else {
					std::cout << "\nВведите длину прямой: ";
					turn[i].Set_Len();
					Igora.AddTurn(turn[i]);
					system("cls");
				}
			}
			std::cout << "                                        ";
			for (i = 0; i < Igora.GetUsName().length() + 6; i++) { std::cout << "*"; }
				std::cout << "\n                                        *  " << Igora.GetUsName() << "  *";	
				std::cout << "\n                                        ";
				for (i = 0; i < Igora.GetUsName().length() + 5; i++) { std::cout << "*"; }
				std::cout << "*";
				std::cout << "\n\n";
				Igora.TurnSpeed(PoloR2);
			
	}

	
	
}