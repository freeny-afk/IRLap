#pragma once
#include "Car.cpp";
#include "Turn.cpp";
#include "Racemap.cpp";
#include <vector>
#include <iostream>

int main() {
	Car PoloR2;
	Turn one, two, three;
	Racemap Igora;

	one.Set_Angl(30);
	one.Set_Len(300);
	Igora.AddTurn(one);
	std::cout << Igora.TurnSpeed();
}