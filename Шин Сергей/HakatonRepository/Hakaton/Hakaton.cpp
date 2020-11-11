

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	// |-------------------------|
	// |med - medium             |
	// |aver - average           |
	// |y - yearly               |
	// |m - monthly              | 
	// |d - daily                |
	// |passcar - passenger car  | 
	// |-------------------------|
	double population;
	int choice;
	int return1;
	int return2;
	int return3;
	double CO2pupilD;
	double CO2pupilM;
	double CO2pupilY;
	//   | cars count | 
	long passengerCar;
	int passengerCarMed;
	int trucks;
	int motorcycle;
	int bus;
	//| average statistics |
	float averYPassCar;
	float averYPassCarMed;
	float averYTruck;
	float averYMotorcycle;
	float averYBus;
	float averMPassCar;
	float averMPassCarMed;
	float averMTruck;
	float averMMotorcycle;
	float averMBus;
	float averDPassCar;
	float averDPassCarMed;
	float averDTruck;
	float averDMotorcycle;
	float averDBus;
	// | CO2 car output (1km) |
	double passCarCO2;
	double passCarMedCO2;
	double truckCO2;
	double motorcycleCO2;
	double busCO2;
    // CO2 count
	   //For 1 car
	         int passCarD;
			 int passCarMedD;
			 int truckD;
			 int motorcycleD;
		     int busD;
			 int passCarM;
			 int passCarMedM;
			 int truckM;
			 int motorcycleM;
			 int busM;
			 unsigned long passCarY;
			 int passCarMedY;
			 int truckY;
			 int motorcycleY;
			 int busY;
	
    //Total
		long ttPassCarD;
		int ttPassCarMedD;
		int ttTruckD;
		int ttMotorcycleD;
		int ttBusD;
		unsigned long ttPassCarM;
		int ttPassCarMedM;
		int ttTruckM;
		int ttMotorcycleM;
		int ttBusM;
		unsigned long ttPassCarY;
		int ttPassCarMedY;
		unsigned long ttTruckY;
		int ttMotorcycleY;
		int ttBusY;
	    long long TotalYear;
		long long TotalMonth;
		long long TotalDay;
	        
	//   | all numbers |       
	population = 18632169;
	passengerCar = 3755890;
	passengerCarMed = 241259;
	trucks = 446475;
	motorcycle = 63058;
	bus = 59516;
	averYPassCar = 15000;
	averYPassCarMed = 20000;
	averYTruck = 25000;
	averYMotorcycle = 7500;
	averYBus = 40000;
	averMPassCar = 1252;
	averMPassCarMed = 1700;
	averMTruck = 2100;
	averMMotorcycle = 625;
	averMBus = 3500;
	averDPassCar = 42;
	averDPassCarMed = 55;
	averDTruck = 69;
	averDMotorcycle = 21;
	averDBus = 110;
	passCarCO2 = 0.158642;
	passCarMedCO2 = 0.199352;
	truckCO2 = 0.290802;
	motorcycleCO2 = 0.1398;
	busCO2 = 0.24021;
// All calculations
//Day per1 car
	    passCarD = averDPassCar * passCarCO2;
		passCarMedD = averDPassCarMed * passCarMedCO2;
		truckD = averDTruck * truckCO2;
		motorcycleD = averDMotorcycle * motorcycleCO2;
		busD = averDBus * busCO2;
		
	    //Total
		      ttPassCarD = passengerCar* passCarD;
			  ttPassCarMedD = passCarMedD * passengerCarMed;
			  ttTruckD = truckD * trucks;
			  ttMotorcycleD = motorcycleD * motorcycle;
			  ttBusD = busD * bus;
//Month per1 car
		passCarM = averMPassCar * passCarCO2;
		passCarMedM = averMPassCarMed * passCarMedCO2;
		truckM = averMTruck * truckCO2;
		motorcycleM = averMMotorcycle * motorcycleCO2;
		busM = averMBus * busCO2;
		//Total
			ttPassCarM = passCarM * passengerCar;
			ttPassCarMedM = passCarMedM * passengerCarMed;
			ttTruckM = truckM * trucks;
			ttMotorcycleM = motorcycleM * motorcycle;
			ttBusM = busM * bus;
// Year per1 car
			passCarY = averYPassCar * passCarCO2;
			passCarMedY = averYPassCarMed * passCarMedCO2;
			truckY = averYTruck * truckCO2;
			motorcycleY = averYMotorcycle * motorcycleCO2;
			busY = averYBus * busCO2;
		//Total
			ttPassCarY = passCarY * passengerCar;
			ttPassCarMedY = passCarMedY * passengerCarMed;
			ttTruckY = truckY * trucks;
			ttMotorcycleY = motorcycleY * motorcycle;
			ttBusY = busY * bus;
  //Period total
	//Year
		    long long a;
			a = ttBusY + ttPassCarY+ttPassCarMedY+ttMotorcycleY;
			TotalYear= a + ttTruckY;

	//Month
			TotalMonth = ttPassCarM + ttPassCarMedM + ttMotorcycleM + ttBusM+ttTruckM;
	//Day
			TotalDay = ttPassCarD + ttPassCarMedD + ttMotorcycleD + ttBusD+ ttTruckD;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Task3
			CO2pupilD = TotalDay / population;
			CO2pupilM = TotalMonth / population;
			CO2pupilY = TotalYear / population;

		
			
		
//***************************************************************************************************************************************************
//                                      |MENU & GRAPHICS|
			system("mode con cols=130 lines=35");
			cout << "                    Добро пожаловать в таблицу по выделениям углекисого газа транспортом в Казахстане.\n\n";
			Return:
			cout << "                                     Пожалуйста, выберите интересующую Вас таблицу.\n";
			cout << "                                         1. Общая статистика по выбросам CO2.\n";
			cout << "                        2. Показать статистику по отдельным видам транспорта за разные периоды времени\n";
			cout << "                            3. Показать количество выделеяeмего углекислого газа на одного жителя РК.\n";
			cout << "Введите номер таблицы >> ";
			cin >> choice;
			if (choice == 1)
			{
				system("cls");
				cout << "    Общая статистика по выбросам CO2 в атмосферу РК.\n";
				cout << "|---------------------------|---------------------------|\n";
				cout << "|          Период           |       Количество СО2      |\n";
				cout << "|---------------------------|---------------------------|\n";
				cout << "|           День            |        " << TotalDay << " кГ        |\n";
				cout << "|---------------------------|---------------------------|\n";
				cout << "|           Месяц           |        " << TotalMonth << " кГ      |\n";
				cout << "|---------------------------|---------------------------|\n";
				cout << "|            Год            |        " << TotalYear << " кГ      |\n";
				cout << "|---------------------------|---------------------------|\n";
			
					cout << "Чтобы вернуться в главное меню введите <1>\n";
					cin >> return1;
					if(return1==1)
					{
						system("cls");
						goto Return;
					}
					else
					{
						return 0;
					}
			}
			else if (choice == 2)
			{
				system("cls");
				cout << "|----------------------------------Статистика выбросам CO2 по отдельным видам транспорта----------------------------------|\n";
				cout << "|                               |                 Пассажирские машины               |                                     |\n";
				cout<<"|    "<< ttPassCarD << " кГ C02 в день.    |           ";
				cout <<"  "<< ttPassCarM << " кГ CО2 в месяц.             |       ";
				cout << ttPassCarY << " кГ CО2 в год.       | \n";
				cout << "|-------------------------------|---------------------------------------------------|-------------------------------------|\n";
				cout << "|                               |                 Пассажирские машины(Средние)      |                                     |\n";
				cout << "|    " << ttPassCarMedD << " кГ C02 в день.     |           ";
				cout << ttPassCarMedM << " кГ CО2 в месяц.                |       ";
				cout << ttPassCarMedY << " кГ CО2 в год.       | \n";
				cout << "|-------------------------------|---------------------------------------------------|-------------------------------------|\n";
				cout << "|                               |                 Грузовые машины                   |                                     |\n";
				cout << "|    " << ttTruckD << " кГ СО2 в день      ";
				cout << "|            " << ttTruckM << " кГ СО2 в месяц               ";
				cout << "|      " << ttTruckY << " кГ СО2 в год        |\n";
				cout << "|-------------------------------|---------------------------------------------------|-------------------------------------|\n";
				cout << "|                               |                      Автобусы                     |                                     |\n";
				cout << "|    " << ttBusD << " кГ СО2 в день      ";
				cout << "|            " << ttBusM << " кГ СО2 в месяц                ";
				cout << "|      " << ttBusY << " кГ СО2 в год         |\n";
				cout << "|-------------------------------|---------------------------------------------------|-------------------------------------|\n";
				cout << "|                               |                 Мотоциклы                         |                                     |\n";
				cout << "|    " << ttMotorcycleD << " кГ СО2 в день       ";
				cout << "|            " << ttMotorcycleM << " кГ СО2 в месяц                 ";
				cout << "|      " << ttMotorcycleY << " кГ СО2 в год          |\n";
				cout << "|-------------------------------------------------------------------------------------------------------------------------|\n";
				cout << "Чтобы вернуться в главное меню введите <1>\n";
				cin >> return2;
				if (return2 == 1)
				{
					system("cls");
					goto Return;
				}
				else
				{
					return 0;
				}





			} 
			else if (choice == 3)
			{
				system("cls");
				cout << "Количество выделяемого СО2 на человека в РК\n";
				cout << "|-----------------------|-----------------------|\n";
				cout << "|        Период         |     Количество СО2    |\n";
				cout << "|-----------------------|-----------------------|\n";
				cout << "|         День          |      "<<CO2pupilD<<" кГ       |\n";
				cout << "|-----------------------|-----------------------|\n";
				cout << "|         Месяц         |      " << CO2pupilM << " кГ       |\n";
				cout << "|-----------------------|-----------------------|\n";
				cout << "|         Год           |      " << CO2pupilY << " кГ       |\n";
				cout << "|-----------------------|-----------------------|\n";



				cout << "Чтобы вернуться в главное меню введите <1>\n";
				cin >> return3;
				if (return3 == 1)
				{
					system("cls");
					goto Return;
				}
				else
				{
					return 0;
				}
			}
			else
			{
			cout << "Error.";
				return 0;
			}
			
			
	
	return 0;
}