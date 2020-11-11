#include "Middle_distance.h"
#include "Auto.h" // Класс автомобилей

Middle_distance::Middle_distance()
{
    months = 12;
    type_of_autos = 5;
    mid_dis = new int*[type_of_autos];
    for (size_t i = 0; i < type_of_autos; i++)
    {
        mid_dis[i] = new int[months];
    }
    for (size_t i = 0; i < type_of_autos; i++)
    {
        for (size_t j = 0; j < months; j++)
        {
            mid_dis[i][j] = 0;
        }
    }
    oblast = undefined_;
}

Middle_distance::~Middle_distance()
{
    delete[] mid_dis;
}

void Middle_distance::oblas(area oblast)
{
    this->oblast = oblast;
}

void Middle_distance::stream(string name)
{
    ifstream file(name); // окрываем файл для чтения
    if (file.is_open())
    {
        for (size_t i = 0; i < type_of_autos; i++)
        {
            for (size_t j = 0; j < months; j++)
            {
                file >> mid_dis[i][j];
            }
        }
    }
    file.close();     // закрываем файл
}

void Middle_distance::show(int car, int middlecar, int truck, int bus, int moto)
{
    long long buff = 0;
    /*   5) a.Матрицы с наименованием столбцов; (3 балла)   */
    /////
    cout << "[Общая статистика по выбросам за разные периоды и общая статистика по отдельным видам транспорта за разные периоды]\n\n";
    switch (oblast)
    {
    case akmol: cout << "[Акмолинская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case aktub: cout << "[Актюбинская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case almatyns: cout << "[Алматинская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case atyrau: cout << "[Атырауская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case zapad: cout << "[Западно Казахстанская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case zhambyl: cout << "[Жамбылская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case karagandy: cout << "[Карагандинская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case kostanai: cout << "[Костанайская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case kyzylor: cout << "[Кызылординская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case mangistau: cout << "[Мангистауская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case pavlodarskaya: cout << "[Павлодарская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case severo: cout << "[Северо Казахстанская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case turkis: cout << "[Туркестанская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    case vostochnaya: cout << "[Восточно Казахстанская область]\t\tРасстояние (км)\t\t\t\t\t\t\t\t\t\t\tВыбросы (кг)";
        break;
    }
    cout << "\n\n\t\t\t\tЯнварь\tФевраль\tМарт\tАпрель\tМай\tИюнь\tИюль\tАвгуст\tСентяб.\tОктябрь\tНоябрь\tДекабрь\n\n";
    for (size_t i = 0; i < type_of_autos; i++)
    {
        switch (i)
        {
        case 0: cout << "[Легковой транспорт]\t\t| "; break;
            //case 0: cout << "[Легковой транспорт]\t\t| Выбросы за год = " << double(((buff / 12) * car)) * 0.158642 * 12 << " | Выбросы за месяц = " << double(((buff / 12) * car)) * 0.158642 << " | Выбросы за день = " << long double(((buff / 12) * car * 0.158642) / 30) << " | "; break;
        case 1: cout << "[Легковой транспорт (средний)]\t| "; break;
        case 2: cout << "[Грузовой транспорт]\t\t| "; break;
        case 3: cout << "[Автобусы]\t\t\t| "; break;
        case 4: cout << "[Мотоцикл]\t\t\t| "; break;
        }
        for (size_t j = 0; j < months; j++)
        {
            cout << mid_dis[i][j] << "\t";
            buff += mid_dis[i][j];
        }
        switch (i)
        {
            //  Формула: (Расстоние которое проезжают машины за год / 12) * количество машин * на коэфицент загрязнения\

            // 4) Вычислить дополнительные статистические данные :
            //  a.Средний выброс вредных веществ в месяц в разрезе каждой области по
            //  каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы,
            //  автобусы); (2 балла) (Реализованно тут под пунктом выбросы за месяц).

            // 4) Вычислить дополнительные статистические данные :
            //  c.Средний выброс вредных веществ в год в разрезе каждой области по
            //  каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы,
            //  автобусы); (2 балла)

            // 4) Вычислить дополнительные статистические данные :
            //  e.Средний выброс вредных веществ в день в разрезе каждой области по
            //  каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы,
            //  автобусы); (2 балла)

        case 0: cout << " | [Выбросы за год] = " << (double)((buff / 12) * car * 0.158642 * 12) << " | [Выбросы за месяц] = " << (double)((buff / 12) * car * 0.158642) << " | [Выбросы за день] = " << (double)(((buff / 12) * car * 0.158642) / 30) << " |"; break;
        case 1: cout << " | [Выбросы за год] = " << (double)((buff / 12) * middlecar * 0.199352 * 12) << " | [Выбросы за месяц] = " << (double)((buff / 12) * middlecar * 0.199352) << " | [Выбросы за день] = " << (double)(((buff / 12) * middlecar * 0.199352) / 30) << " |"; break;
        case 2: cout << " | [Выбросы за год] = " << (double)((buff / 12) * truck * 0.290802 * 12) << " | [Выбросы за месяц] = " << (double)((buff / 12) * truck * 0.290802) << " | [Выбросы за день] = " << (double)(((buff / 12) * truck * 0.290802) / 30) << " |"; break;
        case 3: cout << " | [Выбросы за год] = " << (double)((buff / 12) * bus * 0.24021 * 12) << " | [Выбросы за месяц] = " << (double)((buff / 12) * bus * 0.24021) << " | [Выбросы за день] = " << (double)(((buff / 12) * bus * 0.24021) / 30) << " |"; break;
        case 4: cout << " | [Выбросы за год] = " << (double)((buff / 12) * moto * 0.1398 * 12) << " | [Выбросы за месяц] = " << (double)((buff / 12) * moto * 0.1398) << " | [Выбросы за день] = " << (double)(((buff / 12) * moto * 0.1398) / 30) << " |"; break;
        }
        buff = 0;
        cout << endl;
    }
    cout << "\n\n\n\n\n\n";
    /////
}

long long Middle_distance::all_data()
{
    long long buff = 0;
    for (size_t i = 0; i < type_of_autos; i++)
    {
        for (size_t j = 0; j < months; j++)
        {
            buff += mid_dis[i][j];
        }
    }
    return buff;
}



long long Middle_distance::months_mid_data(int type)
{   
    long long buff = 0;
    for (size_t i = 0; i < 12; i++)
    {
        buff += mid_dis[type][i];
    }

    return buff;
}

