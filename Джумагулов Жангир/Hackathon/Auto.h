#pragma once
#include <iostream>
#include "Auto.h" // ����� �����������
#include <string>  // String
#include <fstream> // ������ ������ 
using namespace std;

enum type_car { undefined, cars_notmiddle, cars_middle, truck, bus, moto }; // ���� �/C

class Auto
{
	int* count_auto; // ���������� �����
	size_t size;        // ������ �������
	type_car type;      // ��� �/�
public:
	Auto();   // ����������� ��� ����������
	Auto(int* count_auto);								// ����������� � ����� ����������
	Auto(int* count_auto, type_car type);				// ����������� � ����� �����������
	Auto(const Auto& obj);									// ����������� �����������
	Auto(const Auto&& obj);									// ����������� �����������
	int count_auto_ret(int area);
	long long all_data();
	void auto_type(type_car type);
	void stream(string name);								// ������
	void show();
};