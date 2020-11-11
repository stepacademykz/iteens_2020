#pragma once
#include "Auto.h" // Класс автомобилей
enum area { undefined_, akmol, aktub, almatyns, atyrau, zapad, zhambyl, karagandy, kostanai, kyzylor, mangistau, pavlodarskaya, severo, turkis, vostochnaya };

class Middle_distance
{
	short months;
	short type_of_autos;
	int** mid_dis;
	area oblast;

public:
	Middle_distance();
	~Middle_distance();
	void oblas(area oblast);
	void stream(string name);
	void show(int car, int middlecar, int truck, int bus, int moto);
	long long all_data();
	long long months_mid_data(int type);
};

