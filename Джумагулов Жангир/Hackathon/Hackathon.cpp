#include <iostream>
#include "Auto.h"
#include "Middle_distance.h" 
#include "string"
using namespace std;

//  1.���������� ����� ���������� �� �������� �� ������ ������� :                  (���������)
//  a.�� ���(2 �����)                  (���������)
//  b.�� �����(2 �����)                  (���������)
//  c.�� ����(3 �����)                  (���������)
//  2.������� ����� ���������� �� ��������� ����� ���������� �� ������ �������                  (���������)
//  ������� :
//  a.�� ���(2 �����)                  (���������)
//  b.�� �����(2 �����)                  (���������)
//  c.�� ����(3 �����)                  (���������)
//  3.��� �������, ��� ���������� ������� ����� 18 632 169. ����� ���������� ����������� ����������� ���� �� ������ ������ �� �� :                  (���������)
//  a.�� ���(2 �����)                  (���������)
//  b.�� �����(2 �����)                  (���������)
//  c.�� ����(3 �����)                  (���������)
//  4.��������� �������������� �������������� ������ :                  (���������)
//  a.������� ������ ������� ������� � ����� � ������� ������ ������� ��
//    ������� ���� ����������(��������, ��������(�������), ��������, ���������,
//    ��������); (2 �����)                  (���������)
//    b.������� ������ ������� ������� � ����� � ���������� �� ������� ����
//    ����������(��������, ��������(�������), ��������, ���������, ��������); (2 �����)                  (���������)
//    c.������� ������ ������� ������� � ��� � ������� ������ ������� ��
//    ������� ���� ����������(��������, ��������(�������), ��������, ���������, ��������); (2 �����)                  (���������)
//    d.������� ������ ������� ������� � ��� � ���������� �� ������� ����
//    ����������(��������, ��������(�������), ��������, ���������, ��������); (2 �����)                  (���������)
//    e.������� ������ ������� ������� � ���� � ������� ������ ������� ��
//    ������� ���� ����������(��������, ��������(�������), ��������, ���������, ��������); (2 �����)                  (���������)
//    f.������� ������ ������� ������� � ���� � ���������� �� ������� ����
//    ����������(��������, ��������(�������), ��������, ���������, ��������); (2 �����)                  (���������)
//    g.���������� �������� ����������� ���� �� ������ �������� � �����, ���, ����; (2 �����)                  (���������)
//    h.������� ������� �� ������� ������ ����������� �� ��������������; (2 �����)                  (���������)
//    5.������������ ������.���������� ������ � ������������� ������� :                  (���������)
//      a.������� � ������������� ��������; (3 �����)                  (���������)
//      b.�������; (2 �����)                  (���������)
//      c.�������, ���������; (3 �����)                  (���������)

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "\n\t ________  ________    _______         \n\t|\\   ____\\|\\   __  \\  /  ___  \\        \n\t\\ \\  \\___|\\ \\  \\|\\  \\/__/|_/  /|       \n\t \\ \\  \\    \\ \\  \\\\\\  \\__|//  / /       \n\t  \\ \\  \\____\\ \\  \\\\\\  \\  /  /_/__      \n\t   \\ \\_______\\ \\_______\\|\\________\\    \n\t    \\|_______|\\|_______| \\|_______|    \n\n\n\n\n[����������, �������� ��������� ������ �� ������ �����]\n\n[*����� ����������, ������� ����� ������*]\n>> ";
    char buff;   // �������� ����� ����� �� ��������� �����
    cin >> buff;
    system("cls");
    Middle_distance mid[14]; 
    mid[0].stream("��_������_�����������.txt"); // ������ ������ � �����
    mid[0].oblas(akmol); // ������������ �������
    mid[1].stream("��_������_�����������.txt"); // ������ ������ � �����
    mid[1].oblas(aktub); // ������������ �������
    mid[2].stream("��_������_�����������.txt");  // ������ ������ � �����
    mid[2].oblas(almatyns); // ������������ �������
    mid[3].stream("��_������_����������.txt"); // ������ ������ � �����
    mid[3].oblas(atyrau); // ������������ �������
    mid[4].stream("��_������_�������_�������������.txt"); // ������ ������ � �����
    mid[4].oblas(zapad); // ������������ �������
    mid[5].stream("��_������_����������.txt"); // ������ ������ � �����
    mid[5].oblas(zhambyl); // ������������ �������
    mid[6].stream("��_������_��������������.txt"); // ������ ������ � �����
    mid[6].oblas(karagandy); // ������������ �������
    mid[7].stream("��_������_������������.txt"); // ������ ������ � �����
    mid[7].oblas(kostanai); // ������������ �������
    mid[8].stream("��_������_��������������.txt"); // ������ ������ � �����
    mid[8].oblas(kyzylor); // ������������ �������
    mid[9].stream("��_������_�������������.txt"); // ������ ������ � �����
    mid[9].oblas(mangistau); // ������������ �������
    mid[10].stream("��_������_������������.txt"); // ������ ������ � �����
    mid[10].oblas(pavlodarskaya); // ������������ �������
    mid[11].stream("��_������_������-������������� �������.txt"); // ������ ������ � �����
    mid[11].oblas(severo); // ������������ �������
    mid[12].stream("��_������_�������������.txt"); // ������ ������ � �����
    mid[12].oblas(turkis); // ������������ �������
    mid[13].stream("��_������_��������_������������� �������.txt"); // ������ ������ � �����
    mid[13].oblas(vostochnaya); // ������������ �������

    Auto cars[5];
    cars[0].auto_type(cars_notmiddle); // ������������ ���� ����������
    cars[0].stream("�_����_���������_����������.txt"); // ������ ������ � �����

    cars[1].auto_type(cars_middle); // ������������ ���� ����������
    cars[1].stream("�_����_���������_����������_��������.txt"); // ������ ������ � �����

    cars[2].auto_type(truck); // ������������ ���� ����������
    cars[2].stream("�_����_���������_����������.txt"); // ������ ������ � �����

    cars[3].auto_type(bus); // ������������ ���� ����������
    cars[3].stream("�_����_�����������_����������.txt"); // ������ ������ � �����

    cars[4].auto_type(moto); // ������������ ���� ����������
    cars[4].stream("�_����_��������������.txt"); // ������ ������ � �����



////////////////////////////////////////////////////////////////////////////////////////////////////



    size_t choose = 0;
    cout << "\t\t\t\t\t[���� ������������ ������� V2000.]"; // ����
    cout << "\n\n[1]. ���������� ��������� ����� ����������";
    cout << "\n[2]. ����� ���������� �� ������ ������� � ����� ���������� �� ��������� ����� ����������";
    cout << "\n[3]. ��������� � ������";
    cout << "\n[4]. ������� ����������";
    cout << "\n[5]. �������";
    cout << "\n[6]. ��������";
    cout << "\n[7]. �����\n\n>> ";
    cin >> choose;
    system("cls");
    switch (choose)
    {
    case 1:
    {
        choose = 0;
        cout << "\t\t[�������� ���������]";
        cout << "\n[1]. �������� ����������";
        cout << "\n[2]. �������� ����������(�������)";
        cout << "\n[3]. �������� ����������";
        cout << "\n[4]. ��������";
        cout << "\n[5]. ���������\n\n>> ";
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
    // 1) ���������� ����� ���������� �� �������� �� ������ ������� :
    //   a.�� ���(2 �����)
    //   b.�� �����(2 �����)
    //   c.�� ����(3 �����)
    // 2) ������� ����� ���������� �� ��������� ����� ���������� �� ������ �������
    //    ������� :
    //    a.�� ���(2 �����)
    //    b.�� �����(2 �����)
    //    c.�� ����(3 �����)

    case 2:
    {
        choose = 0;
        cout << "\t\t[�������� �������]";
        cout << "\n[1]. ����������� �������";
        cout << "\n[2]. ����������� �������";
        cout << "\n[3]. ����������� �������";
        cout << "\n[4]. ���������� �������";
        cout << "\n[5]. ������� ������������� �������";
        cout << "\n[6]. ���������� �������";
        cout << "\n[7]. �������������� �������";
        cout << "\n[8]. ������������ �������";
        cout << "\n[9]. �������������� �������";
        cout << "\n[10]. ������������� �������";
        cout << "\n[11]. ������������ �������";
        cout << "\n[12]. ������ ������������� �������";
        cout << "\n[13]. ������������� �������";
        cout << "\n[14]. �������� ������������� �������\n\n>> ";
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
        cout << "[��������� � ������]\t\t\t\t[*�������� ����������� �����������*]\n";
        cout << "\n[������ �������� ������ � ������� ���������] \t\t\t\t| " << midd / 14 << " [��]";
        cout << "\n[������������������ ����� � ������] \t\t\t\t\t| " << carsss;

        // 3) ��� �������, ��� ���������� ������� ����� 18 632 169. ����� ���������� ����������� ����������� ���� �� ������ ������ �� �� :
        //    a.�� ���(2 �����)
        //    b.�� �����(2 �����)
        //    c.�� ����(3 �����)
        // 4) g.���������� �������� ����������� ���� �� ������ �������� � �����, ���,
        //    ����; (2 �����)

        cout << "\n[������ ������ ���������� � ������� ���������] \t\t\t\t| " << (carsss * (midd / 14)) / 18632169 << " [��]";
        cout << "\n[������ ������ ���������� � ������� ��������� ����������� CO2 � ���] \t| " << (carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5) << " [��]";
        cout << "\n[������ ������ ���������� � ������� ��������� ����������� CO2 � �����] \t| " << ((carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5)) / 12 << " [��]";
        cout << "\n[������ ������ ���������� � ������� ��������� ����������� CO2 � ����] \t| " << (((carsss * (midd / 14)) / 18632169 * ((0.158642 + 0.199352 + 0.290802 + 0.1398 + 0.24021) / 5)) / 12) / 30 << " [��]\n\n\n\n\n";
        break;
    }
    case 4:
    {
        // 4)  b.������� ������ ������� ������� � ����� � ���������� �� ������� ����
        //     ����������(��������, ��������(�������), ��������, ���������, ��������); (2
        //     �����)

        long long buff = 0;
        long long buff_car = 0;
        cout << "[������� ���������� �������� � �����]\t\t[*�������� �������� � ������*]\t\t[*�������� ����������� �����������*]\n";
        cout << "\n[�������� ����������]";
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
        cout << "\n[�������� ����������(�������)]";
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
        cout << "\n[�������� ����������]";
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
        cout << "\n[��������]";
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
        cout << "\n[���������]";
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

        // 4) d.������� ������ ������� ������� � ��� � ���������� �� ������� ����
        //    ����������(��������, ��������(�������), ��������, ���������, ��������); (2
        //    �����)

        cout << "\n\n\n\n\n[������� ���������� �������� � ���]\t\t[*�������� �������� � ������*]\t\t[*�������� ����������� �����������*]\n";
        cout << "\n[�������� ����������]";
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
        cout << "\n[�������� ����������(�������)]";
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
        cout << "\n[�������� ����������]";
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
        cout << "\n[��������]";
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
        cout << "\n[���������]";
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

        //4)  f.������� ������ ������� ������� � ���� � ���������� �� ������� ����
        //    ����������(��������, ��������(�������), ��������, ���������, ��������);
        //    (2 �����)

        cout << "[������� ���������� �������� � ����]\t\t[*�������� �������� � ������*]\t\t[*�������� ����������� �����������*]\n";
        cout << "\n[�������� ����������]";
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
        cout << "\n[�������� ����������(�������)]";
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
        cout << "\n[�������� ����������]";
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
        cout << "\n[��������]";
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
        cout << "\n[���������]";
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
        cout << "[�������]\n\n";
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
                cout << "����������� �������\t\t\t|";
            }
            else if (buff_car[i] == buff_city[1])
            {
                cout << "����������� �������\t\t\t|";
            }
            else if (buff_car[i] == buff_city[2])
            {
                cout << "����������� �������\t\t|";
            }
            else if (buff_car[i] == buff_city[3])
            {
                cout << "���������� �������\t\t\t|";
            }
            else if (buff_car[i] == buff_city[4])
            {
                cout << "������� ������������� �������\t|";
            }
            else if (buff_car[i] == buff_city[5])
            {
                cout << "���������� �������\t\t\t|";
            }
            else if (buff_car[i] == buff_city[6])
            {
                cout << "�������������� �������\t\t|";
            }
            else if (buff_car[i] == buff_city[7])
            {
                cout << "������������ �������\t\t|";
            }
            else if (buff_car[i] == buff_city[8])
            {
                cout << "�������������� �������\t\t|";
            }
            else if (buff_car[i] == buff_city[9])
            {
                cout << "������������� �������\t\t|";
            }
            else if (buff_car[i] == buff_city[10])
            {
                cout << "������������ �������\t\t|";
            }
            else if (buff_car[i] == buff_city[11])
            {
                cout << "������ ������������� �������\t|";
            }
            else if (buff_car[i] == buff_city[12])
            {
                cout << "������������� ������� �������\t|";
            }
            else if (buff_car[i] == buff_city[13])
            {
                cout << "�������� �������������\t\t|";
            }
            cout << buff_car[i];
        }
        cout << "\n\n\n";
        delete[] buff_car;
        break;
    }
    case 6:
    {
        cout << "\n[��������]";
        cout << "\n\n����� �������� \t\t| +7 777 114 16 16";
        cout << "\n����� \t\t\t| zhangirban@gmail.com";
        cout << "\n(�) ������ ���������� \t| SEP-201.3\n";
        cout << "\n__________________\n\niteens 2020\n\n\n\n\n";
        break;
    }
    case 7: return 0; break;
    default: break;
    }

    return 0;
}