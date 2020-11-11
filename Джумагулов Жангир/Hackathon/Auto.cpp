#include "Auto.h" // Класс автомобилей
#include "Auto.h"  // Класс автомобилей
#include <string>  // String
#include <fstream> // Запись файлов 
using namespace std;

Auto::Auto()
{
	size = 14;
	count_auto = new int[size];
	type = undefined;
}

Auto::Auto(int* count_auto)
{
	size = 14;
	this->count_auto = new int[size];
	this->count_auto = count_auto;
}

Auto::Auto(int* count_auto, type_car type) : Auto(count_auto)
{
	this->type = type;
}

Auto::Auto(const Auto& obj)
{
	this->count_auto = new int[obj.size];
	for (size_t i = 0; i < obj.size; i++)
	{	
		this->count_auto[i] = obj.count_auto[i];
	}
	this->type = obj.type;
	this->size = obj.size;
}

Auto::Auto(const Auto&& obj)
{
	this->count_auto = obj.count_auto;
	this->type = obj.type;
	this->size = obj.size;
}

int Auto::count_auto_ret(int area)
{
	return count_auto[area];
}

long long Auto::all_data()
{
	long long buff = 0;
	for (size_t i = 0; i < size; i++)
	{
		buff += count_auto[i];
	}
	return buff;
}

void Auto::auto_type(type_car type)
{
	this->type = type;
}

void Auto::stream(string name)
{
	ifstream file(name); // окрываем файл для чтения
	if (file.is_open())
	{
		for (size_t i = 0; i < size; i++)
		{
			file >> count_auto[i];
		}
	}
	file.close();     // закрываем файл
}

void Auto::show()
{
	switch (type)
	{
	case cars_notmiddle:
		cout << "[Легковой транспорт]";
		break;
	case cars_middle:
		cout << "[Легковой транспорт (средний)]";
		break;
	case truck:
		cout << "[Грузовой транспорт]";
		break;
	case bus:
		cout << "[Автобусы]";
		break;
	case moto:
		cout << "[Мотоцикл]";
		break;
	}
	/*   5) b.Таблицы; (2 балла)   */
	/////
	cout << "\n\n[Таблица]\n _______________________________________________________";
	cout << "\t\n| [Акмолинская область]\t\t\t|   " << count_auto[0];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Актюбинская область]\t\t\t|   " << count_auto[1];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Алматинская область]\t\t\t|   " << count_auto[2];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Атырауская область]\t\t\t|   " << count_auto[3];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Западно Казахстанская область]\t|   " << count_auto[4];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Жамбылская область]\t\t\t|   " << count_auto[5];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Карагандинская область]\t\t|   " << count_auto[6];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Костанайская область]\t\t|   " << count_auto[7];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Кызылординская область]\t\t|   " << count_auto[8];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Мангистауская область]\t\t|   " << count_auto[9];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Павлодарская область]\t\t|   " << count_auto[10];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Северо Казахстанская область]\t|   " << count_auto[11];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Туркестанская область]\t\t|   " << count_auto[12];
	cout << "\t|\n|_______________________________________|_______________|";
	cout << "\n| [Восточно Казахстанская область]\t|   " << count_auto[13];
	cout << "\t|\n|_______________________________________|_______________|\n\n\n[График]\n\n";
	/////

	/*   5) c.Графики, диаграммы; (3 балла)   */
	/////
	if (type == cars_notmiddle) 
	{
		for (size_t i = 0; i < size; i++)
		{
			switch (i)
			{
			case 0: cout << "[Акмолинская область]\t\t\t";
				break;
			case 1: cout << "[Актюбинская область]\t\t\t";
				break;
			case 2: cout << "[Алматинская область]\t\t\t";
				break;
			case 3: cout << "[Атырауская область]\t\t\t";
				break;
			case 4: cout << "[Западно Казахстанская область]\t\t";
				break;
			case 5: cout << "[Жамбылская область]\t\t\t";
				break;
			case 6: cout << "[Карагандинская область]\t\t";
				break;
			case 7: cout << "[Костанайская область]\t\t\t";
				break;
			case 8: cout << "[Кызылординская область]\t\t";
				break;
			case 9: cout << "[Мангистауская область]\t\t\t";
				break;
			case 10: cout << "[Павлодарская область]\t\t\t";
				break;
			case 11: cout << "[Северо Казахстанская область]\t\t";
				break;
			case 12: cout << "[Туркестанская область]\t\t\t";
				break;
			case 13: cout << "[Восточно Казахстанская область]\t";
				break;
			}
			for (size_t j = 0; j < count_auto[i] / 15000; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else
	{

		for (size_t i = 0; i < size; i++)
		{
			switch (i)
			{
			case 0: cout << "[Акмолинская область]\t\t\t";
				break;
			case 1: cout << "[Актюбинская область]\t\t\t";
				break;
			case 2: cout << "[Алматинская область]\t\t\t";
				break;
			case 3: cout << "[Атырауская область]\t\t\t";
				break;
			case 4: cout << "[Западно Казахстанская область]\t\t";
				break;
			case 5: cout << "[Жамбылская область]\t\t\t";
				break;
			case 6: cout << "[Карагандинская область]\t\t";
				break;
			case 7: cout << "[Костанайская область]\t\t\t";
				break;
			case 8: cout << "[Кызылординская область]\t\t";
				break;
			case 9: cout << "[Мангистауская область]\t\t\t";
				break;
			case 10: cout << "[Павлодарская область]\t\t\t";
				break;
			case 11: cout << "[Северо Казахстанская область]\t\t";
				break;
			case 12: cout << "[Туркестанская область]\t\t\t";
				break;
			case 13: cout << "[Восточно Казахстанская область]\t";
				break;
			}
			for (size_t j = 0; j < count_auto[i] / 500; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	/////
}
