#pragma once
#include <iostream>
#include "Auto.h" // Класс автомобилей
#include <string>  // String
#include <fstream> // Запись файлов 
using namespace std;

enum type_car { undefined, cars_notmiddle, cars_middle, truck, bus, moto }; // Типы Т/C

class Auto
{
	int* count_auto; // Количество машин
	size_t size;        // Размер массива
	type_car type;      // Тип Т/С
public:
	Auto();   // Конструктор без параметров
	Auto(int* count_auto);								// Конструктор с одним параметром
	Auto(int* count_auto, type_car type);				// Конструктор с двумя параметрами
	Auto(const Auto& obj);									// Конструктор копирования
	Auto(const Auto&& obj);									// Конструктор перемещения
	int count_auto_ret(int area);
	long long all_data();
	void auto_type(type_car type);
	void stream(string name);								// Запись
	void show();
};