#include <iostream>
#include "Auto.h"
#include "Middle_distance.h" 
#include "string"
using namespace std;

//  1.Рассчитать общую статистику по выбросам за разные периоды :                  (ВЫПОЛНЕНО)
//  a.За год(2 балла)                  (ВЫПОЛНЕНО)
//  b.За месяц(2 балла)                  (ВЫПОЛНЕНО)
//  c.За день(3 балла)                  (ВЫПОЛНЕНО)
//  2.Вывести общую статистику по отдельным видам транспорта за разные периоды                  (ВЫПОЛНЕНО)
//  времени :
//  a.За год(2 балла)                  (ВЫПОЛНЕНО)
//  b.За месяц(2 балла)                  (ВЫПОЛНЕНО)
//  c.За день(3 балла)                  (ВЫПОЛНЕНО)
//  3.При условии, что количество жителей равно 18 632 169. Найти количество выделяемого углекислого газа на одного жителя РК за :                  (ВЫПОЛНЕНО)
//  a.За год(2 балла)                  (ВЫПОЛНЕНО)
//  b.За месяц(2 балла)                  (ВЫПОЛНЕНО)
//  c.За день(3 балла)                  (ВЫПОЛНЕНО)
//  4.Вычислить дополнительные статистические данные :                  (ВЫПОЛНЕНО)
//  a.Средний выброс вредных веществ в месяц в разрезе каждой области по
//    каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы,
//    автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    b.Средний выброс вредных веществ в месяц в Казахстане по каждому типу
//    автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    c.Средний выброс вредных веществ в год в разрезе каждой области по
//    каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    d.Средний выброс вредных веществ в год в Казахстане по каждому типу
//    автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    e.Средний выброс вредных веществ в день в разрезе каждой области по
//    каждому типу автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    f.Средний выброс вредных веществ в день в Казахстане по каждому типу
//    автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2 балла)                  (ВЫПОЛНЕНО)
//    g.Количество выбросов углекислого газа на одного человека в месяц, год, день; (2 балла)                  (ВЫПОЛНЕНО)
//    h.Вывести области по порядку уровня загрязнения от автотранспорта; (2 балла)                  (ВЫПОЛНЕНО)
//    5.Визуализация данных.Отобразить данные в удобочитаемом формате :                  (ВЫПОЛНЕНО)
//      a.Матрицы с наименованием столбцов; (3 балла)                  (ВЫПОЛНЕНО)
//      b.Таблицы; (2 балла)                  (ВЫПОЛНЕНО)
//      c.Графики, диаграммы; (3 балла)                  (ВЫПОЛНЕНО)

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "\n\t ________  ________    _______         \n\t|\\   ____\\|\\   __  \\  /  ___  \\        \n\t\\ \\  \\___|\\ \\  \\|\\  \\/__/|_/  /|       \n\t \\ \\  \\    \\ \\  \\\\\\  \\__|//  / /       \n\t  \\ \\  \\____\\ \\  \\\\\\  \\  /  /_/__      \n\t   \\ \\_______\\ \\_______\\|\\________\\    \n\t    \\|_______|\\|_______| \\|_______|    \n\n\n\n\n[Пожалуйста, откройте командную строку на полный экран]\n\n[*Чтобы продолжить, введите любой символ*]\n>> ";
    char buff;   // Задержка чтобы сразу не очистился экран
    cin >> buff;
    system("cls");
    Middle_distance mid[14]; 
    mid[0].stream("ср_пробег_Акмолинская.txt"); // Запись данных с файла
    mid[0].oblas(akmol); // Присваивание области
    mid[1].stream("ср_пробег_Актюбинская.txt"); // Запись данных с файла
    mid[1].oblas(aktub); // Присваивание области
    mid[2].stream("ср_пробег_Алматинская.txt");  // Запись данных с файла
    mid[2].oblas(almatyns); // Присваивание области
    mid[3].stream("ср_пробег_Атырауская.txt"); // Запись данных с файла
    mid[3].oblas(atyrau); // Присваивание области
    mid[4].stream("ср_пробег_Западно_Казахстанская.txt"); // Запись данных с файла
    mid[4].oblas(zapad); // Присваивание области
    mid[5].stream("ср_пробег_Жамбылская.txt"); // Запись данных с файла
    mid[5].oblas(zhambyl); // Присваивание области
    mid[6].stream("ср_пробег_Карагандинская.txt"); // Запись данных с файла
    mid[6].oblas(karagandy); // Присваивание области
    mid[7].stream("ср_пробег_Костанайская.txt"); // Запись данных с файла
    mid[7].oblas(kostanai); // Присваивание области
    mid[8].stream("ср_пробег_Кызылординская.txt"); // Запись данных с файла
    mid[8].oblas(kyzylor); // Присваивание области
    mid[9].stream("ср_пробег_Мангистауская.txt"); // Запись данных с файла
    mid[9].oblas(mangistau); // Присваивание области
    mid[10].stream("ср_пробег_Павлодарская.txt"); // Запись данных с файла
    mid[10].oblas(pavlodarskaya); // Присваивание области
    mid[11].stream("ср_пробег_Северо-Казахстанская область.txt"); // Запись данных с файла
    mid[11].oblas(severo); // Присваивание области
    mid[12].stream("ср_пробег_Туркестанская.txt"); // Запись данных с файла
    mid[12].oblas(turkis); // Присваивание области
    mid[13].stream("ср_пробег_Восточно_Казахстанская область.txt"); // Запись данных с файла
    mid[13].oblas(vostochnaya); // Присваивание области

    Auto cars[5];
    cars[0].auto_type(cars_notmiddle); // Присваивание вида транспорта
    cars[0].stream("к_авто_легкового_транспорта.txt"); // Запись данных с файла

    cars[1].auto_type(cars_middle); // Присваивание вида транспорта
    cars[1].stream("к_авто_легкового_транспорта_среднего.txt"); // Запись данных с файла

    cars[2].auto_type(truck); // Присваивание вида транспорта
    cars[2].stream("к_авто_грузового_транспорта.txt"); // Запись данных с файла

    cars[3].auto_type(bus); // Присваивание вида транспорта
    cars[3].stream("к_авто_автобусного_транспорта.txt"); // Запись данных с файла

    cars[4].auto_type(moto); // Присваивание вида транспорта
    cars[4].stream("к_авто_мототранспорта.txt"); // Запись данных с файла



////////////////////////////////////////////////////////////////////////////////////////////////////



    size_t choose = 0;
    cout << "\t\t\t\t\t[Анти загрязнитель воздуха V2000.]"; // Меню
    cout << "\n\n[1]. Количество отдельных видов транспорта";
    cout << "\n[2]. Общая статистика за разные периоды и общая статистика по отдельным видам транспорта";
    cout << "\n[3]. Казахстан в цифрах";
    cout << "\n[4]. Средние показатели";
    cout << "\n[5]. Рейтинг";
    cout << "\n[6]. Контакты";
    cout << "\n[7]. Выйти\n\n>> ";
    cin >> choose;
    system("cls");
    switch (choose)
    {
    case 1:
    {
        choose = 0;
        cout << "\t\t[Выбирите транспорт]";
        cout << "\n[1]. Легковые автомобили";
        cout << "\n[2]. Легковые автомобили(средний)";
        cout << "\n[3]. Грузовые автомобили";
        cout << "\n[4]. Автобусы";
        cout << "\n[5]. Мотоциклы\n\n>> ";
        cin >> choose;
        system("cls");
        switch (choose)
        {
        case 1: cars[0].show(); break;
        case 2: cars[1].show(); break;
        case 3: cars[2].show(); break;
        case 4: cars[3].show(); break;
        case 5: cars[4].show(); break;
        default: break;
        }
        break;
    }
    // 1) Рассчитать общую статистику по выбросам за разные периоды :
    //   a.За год(2 балла)
    //   b.За месяц(2 балла)
    //   c.За день(3 балла)
    // 2) Вывести общую статистику по отдельным видам транспорта за разные периоды
    //    времени :
    //    a.За год(2 балла)
    //    b.За месяц(2 балла)
    //    c.За день(3 балла)

    case 2:
    {
        choose = 0;
        cout << "\t\t[Выбирите область]";
        cout << "\n[1]. Акмолинская область";
        cout << "\n[2]. Актюбинская область";
        cout << "\n[3]. Алматинская область";
        cout << "\n[4]. Атырауская область";
        cout << "\n[5]. Западно Казахстанская область";
        cout << "\n[6]. Жамбылская область";
        cout << "\n[7]. Карагандинская область";
        cout << "\n[8]. Костанайская область";
        cout << "\n[9]. Кызылординская область";
        cout << "\n[10]. Мангистауская область";
        cout << "\n[11]. Павлодарская область";
        cout << "\n[12]. Северо Казахстанская область";
        cout << "\n[13]. Туркестанская область";
        cout << "\n[14]. Восточно Казахстанская область\n\n>> ";
        cin >> choose;
        system("cls");
        switch (choose)
        {
        case 1: mid[0].show(cars[0].count_auto_ret(0), cars[1].count_auto_ret(0), cars[2].count_auto_ret(0), cars[3].count_auto_ret(0), cars[4].count_auto_ret(0)); break;
        case 2: mid[1].show(cars[0].count_auto_ret(1), cars[1].count_auto_ret(1), cars[2].count_auto_ret(1), cars[3].count_auto_ret(1), cars[4].count_auto_ret(1)); break;
        case 3: mid[2].show(cars[0].count_auto_ret(2), cars[1].count_auto_ret(2), cars[2].count_auto_ret(2), cars[3].count_auto_ret(2), cars[4].count_auto_ret(2)); break;
        case 4: mid[3].show(cars[0].count_auto_ret(3), cars[1].count_auto_ret(3), cars[2].count_auto_ret(3), cars[3].count_auto_ret(3), cars[4].count_auto_ret(3)); break;
        case 5: mid[4].show(cars[0].count_auto_ret(4), cars[1].count_auto_ret(4), cars[2].count_auto_ret(4), cars[3].count_auto_ret(4), cars[4].count_auto_ret(4)); break;
        case 6: mid[5].show(cars[0].count_auto_ret(5), cars[1].count_auto_ret(5), cars[2].count_auto_ret(5), cars[3].count_auto_ret(5), cars[4].count_auto_ret(5)); break;
        case 7: mid[6].show(cars[0].count_auto_ret(6), cars[1].count_auto_ret(6), cars[2].count_auto_ret(6), cars[3].count_auto_ret(6), cars[4].count_auto_ret(6)); break;
        case 8: mid[7].show(cars[0].count_auto_ret(7), cars[1].count_auto_ret(7), cars[2].count_auto_ret(7), cars[3].count_auto_ret(7), cars[4].count_auto_ret(7)); break;
        case 9: mid[8].show(cars[0].count_auto_ret(8), cars[1].count_auto_ret(8), cars[2].count_auto_ret(8), cars[3].count_auto_ret(8), cars[4].count_auto_ret(8)); break;
        case 10: mid[9].show(cars[0].count_auto_ret(9), cars[1].count_auto_ret(9), cars[2].count_auto_ret(9), cars[3].count_auto_ret(9), cars[4].count_auto_ret(9)); break;
        case 11: mid[10].show(cars[0].count_auto_ret(10), cars[1].count_auto_ret(10), cars[2].count_auto_ret(10), cars[3].count_auto_ret(10), cars[4].count_auto_ret(10)); break;
        case 12: mid[11].show(cars[0].count_auto_ret(11), cars[1].count_auto_ret(11), cars[2].count_auto_ret(11), cars[3].count_auto_ret(11), cars[4].count_auto_ret(11)); break;
        case 13: mid[12].show(cars[0].count_auto_ret(12), cars[1].count_auto_ret(12), cars[2].count_auto_ret(12), cars[3].count_auto_ret(12), cars[4].count_auto_ret(12)); break;
        case 14: mid[13].show(cars[0].count_auto_ret(13), cars[1].count_auto_ret(13), cars[2].count_auto_ret(13), cars[3].count_auto_ret(13), cars[4].count_auto_ret(13)); break;
        default: break;
        }
        break;
    }
    case 3:
    {
        long long midd = 0;
        long long carsss = 0;
        for (size_t i = 0; i < 14; i++)
        {
            midd += mid[i].all_data();
        }
        for (size_t i = 0; i < 5; i++)
        {
            carsss += cars[i].all_data();
        }
        cout << "[Казахстан в цифрах]\t\t\t\t[*Возможны минимальные погрешности*]\n";
        cout << "\n[Каждый владелец машины в среднем проезжает] \t\t\t\t| " << midd / 14 << " [Км]";
        cout << "\n[Зарегестрированных машин в стране] \t\t\t\t\t| " << carsss;

        // 3) При условии, что количество жителей равно 18 632 169. Найти количество выделяемого углекислого газа на одного жителя РК за :
        //    a.За год(2 балла)
        //    b.За месяц(2 балла)
        //    c.За день(3 балла)
        // 4) g.Количество выбросов углекислого газа на одного человека в месяц, год,
        //    день; (2 балла)

        cout << "\n[Каждый житель казахстана в среднем проезжает] \t\t\t\t| " << (carsss * (midd / 14)) / 18632169 << " [Км]";
        cout << "\n[Каждый житель казахстана в среднем оставляет загрязнения CO2 в год] \t| " << (carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5) << " [Кг]";
        cout << "\n[Каждый житель казахстана в среднем оставляет загрязнения CO2 в месяц] \t| " << ((carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5)) / 12 << " [Кг]";
        cout << "\n[Каждый житель казахстана в среднем оставляет загрязнения CO2 в день] \t| " << (((carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5)) / 12) / 30 << " [Кг]\n\n\n\n\n";
        break;
    }
    case 4:
    {
        // 4)  b.Средний выброс вредных веществ в месяц в Казахстане по каждому типу
        //     автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2
        //     балла)

        long long buff = 0;
        long long buff_car = 0;
        cout << "[Средние показатели выбросов в месяц]\t\t[*Значения указанны в тоннах*]\t\t[*Возможны минимальные погрешности*]\n";
        cout << "\n[Легковые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(0);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[0].count_auto_ret(i);
        }
        cout << "\t\t|\t" << ((buff / 12) * buff_car * 0.158642) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Легковые автомобили(средний)]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(1);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[1].count_auto_ret(i);
        }
        cout << "\t|\t" << ((buff / 12) * buff_car * 0.199352) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Грузовые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(2);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[2].count_auto_ret(i);
        }
        cout << "\t\t|\t" << ((buff / 12) * buff_car * 0.290802) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Автобусы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(3);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[3].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << ((buff / 12) * buff_car * 0.1398) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Мотоциклы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(4);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[4].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << ((buff / 12) * buff_car * 0.24021) / 1000;
        buff = 0, buff_car = 0;

        // 4) d.Средний выброс вредных веществ в год в Казахстане по каждому типу
        //    автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы); (2
        //    балла)

        cout << "\n\n\n\n\n[Средние показатели выбросов в год]\t\t[*Значения указанны в тоннах*]\t\t[*Возможны минимальные погрешности*]\n";
        cout << "\n[Легковые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(0);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[0].count_auto_ret(i);
        }
        cout << "\t\t|\t" << (buff * buff_car * 0.158642) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Легковые автомобили(средний)]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(1);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[1].count_auto_ret(i);
        }
        cout << "\t|\t" << (buff * buff_car * 0.199352) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Грузовые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(2);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[2].count_auto_ret(i);
        }
        cout << "\t\t|\t" << (buff * buff_car * 0.290802) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Автобусы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(3);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[3].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << (buff * buff_car * 0.1398) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Мотоциклы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(4);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[4].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << (buff * buff_car * 0.24021) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n\n\n\n";

        //4)  f.Средний выброс вредных веществ в день в Казахстане по каждому типу
        //    автомобиля(легковой, легковой(средний), грузовой, мотоциклы, автобусы);
        //    (2 балла)

        cout << "[Средние показатели выбросов в День]\t\t[*Значения указанны в тоннах*]\t\t[*Возможны минимальные погрешности*]\n";
        cout << "\n[Легковые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(0);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[0].count_auto_ret(i);
        }
        cout << "\t\t|\t" << ((buff / 12 / 30) * buff_car * 0.158642) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Легковые автомобили(средний)]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(1);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[1].count_auto_ret(i);
        }
        cout << "\t|\t" << ((buff / 12 / 30) * buff_car * 0.199352) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Грузовые автомобили]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(2);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[2].count_auto_ret(i);
        }
        cout << "\t\t|\t" << ((buff / 12 / 30) * buff_car * 0.290802) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Автобусы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(3);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[3].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << ((buff / 12 / 30) * buff_car * 0.1398) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n[Мотоциклы]";
        for (size_t i = 0; i < 14; i++)
        {
            buff += mid[i].months_mid_data(4);
        }
        for (size_t i = 0; i < 5; i++)
        {
            buff_car += cars[4].count_auto_ret(i);
        }
        cout << "\t\t\t|\t" << ((buff / 12) * buff_car * 0.24021) / 1000;
        buff = 0, buff_car = 0;
        cout << "\n\n\n\n\n";
        break;
    }
    case 5:
    {
        cout << "[Рейтинг]\n\n";
        int* buff_car = new int[14];
        int* buff_city = new int[14];
        for (size_t i = 0; i < 14; i++)
        {
            buff_car[i] = cars[0].count_auto_ret(i) + cars[1].count_auto_ret(i) + cars[2].count_auto_ret(i) + cars[3].count_auto_ret(i) + cars[4].count_auto_ret(i);
            buff_city[i] = cars[0].count_auto_ret(i) + cars[1].count_auto_ret(i) + cars[2].count_auto_ret(i) + cars[3].count_auto_ret(i) + cars[4].count_auto_ret(i);
        }

        int temp = 0;
        for (int i = 0; i < 14 - 1; i++)
        {
            for (int j = 0; j < 14 - i - 1; j++)
            {
                if (buff_car[j] > buff_car[j + 1])
                {
                    temp = buff_car[j];
                    buff_car[j] = buff_car[j + 1];
                    buff_car[j + 1] = temp;
                }
            }
        }

        for (size_t i = 0; i < 14; i++)
        {
            cout << "\n[" << i << "].";
            if (buff_car[i] == buff_city[0])
            {
                cout << "Акмолинская область\t\t\t|";
            }
            else if (buff_car[i] == buff_city[1])
            {
                cout << "Актюбинская область\t\t\t|";
            }
            else if (buff_car[i] == buff_city[2])
            {
                cout << "Алматинская область\t\t|";
            }
            else if (buff_car[i] == buff_city[3])
            {
                cout << "Атырауская область\t\t\t|";
            }
            else if (buff_car[i] == buff_city[4])
            {
                cout << "Западно Казахстанская область\t|";
            }
            else if (buff_car[i] == buff_city[5])
            {
                cout << "Жамбылская область\t\t\t|";
            }
            else if (buff_car[i] == buff_city[6])
            {
                cout << "Карагандинская область\t\t|";
            }
            else if (buff_car[i] == buff_city[7])
            {
                cout << "Костанайская область\t\t|";
            }
            else if (buff_car[i] == buff_city[8])
            {
                cout << "Кызылординская область\t\t|";
            }
            else if (buff_car[i] == buff_city[9])
            {
                cout << "Мангистауская область\t\t|";
            }
            else if (buff_car[i] == buff_city[10])
            {
                cout << "Павлодарская область\t\t|";
            }
            else if (buff_car[i] == buff_city[11])
            {
                cout << "Северо Казахстанская область\t|";
            }
            else if (buff_car[i] == buff_city[12])
            {
                cout << "Туркестанская область область\t|";
            }
            else if (buff_car[i] == buff_city[13])
            {
                cout << "Восточно Казахстанская\t\t|";
            }
            cout << buff_car[i];
        }
        cout << "\n\n\n";
        delete[] buff_car;
        break;
    }
    case 6:
    {
        cout << "\n[Контакты]";
        cout << "\n\nНомер телефона \t\t| +7 777 114 16 16";
        cout << "\nПочта \t\t\t| zhangirban@gmail.com";
        cout << "\n(С) Жангир Джумагулов \t| SEP-201.3\n";
        cout << "\n__________________\n\niteens 2020\n\n\n\n\n";
        break;
    }
    case 7: return 0; break;
    default: break;
    }

    return 0;
}