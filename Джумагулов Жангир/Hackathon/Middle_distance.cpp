#include "Middle_distance.h"
#include "Auto.h" // ����� �����������

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
    ifstream file(name); // �������� ���� ��� ������
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
    file.close();     // ��������� ����
}

void Middle_distance::show(int car, int middlecar, int truck, int bus, int moto)
{
    long long buff = 0;
    /*   5) a.������� � ������������� ��������; (3 �����)   */
    /////
    cout << "[����� ���������� �� �������� �� ������ ������� � ����� ���������� �� ��������� ����� ���������� �� ������ �������]\n\n";
    switch (oblast)
    {
    case akmol: cout << "[����������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case aktub: cout << "[����������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case almatyns: cout << "[����������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case atyrau: cout << "[���������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case zapad: cout << "[������� ������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case zhambyl: cout << "[���������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case karagandy: cout << "[�������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case kostanai: cout << "[������������ �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case kyzylor: cout << "[�������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case mangistau: cout << "[������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case pavlodarskaya: cout << "[������������ �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case severo: cout << "[������ ������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case turkis: cout << "[������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    case vostochnaya: cout << "[�������� ������������� �������]\t\t���������� (��)\t\t\t\t\t\t\t\t\t\t\t������� (��)";
        break;
    }
    cout << "\n\n\t\t\t\t������\t�������\t����\t������\t���\t����\t����\t������\t������.\t�������\t������\t�������\n\n";
    for (size_t i = 0; i < type_of_autos; i++)
    {
        switch (i)
        {
        case 0: cout << "[�������� ���������]\t\t| "; break;
            //case 0: cout << "[�������� ���������]\t\t| ������� �� ��� = " << double(((buff / 12) * car)) * 0.158642 * 12 << " | ������� �� ����� = " << double(((buff / 12) * car)) * 0.158642 << " | ������� �� ���� = " << long double(((buff / 12) * car * 0.158642) / 30) << " | "; break;
        case 1: cout << "[�������� ��������� (�������)]\t| "; break;
        case 2: cout << "[�������� ���������]\t\t| "; break;
        case 3: cout << "[��������]\t\t\t| "; break;
        case 4: cout << "[��������]\t\t\t| "; break;
        }
        for (size_t j = 0; j < months; j++)
        {
            cout << mid_dis[i][j] << "\t";
            buff += mid_dis[i][j];
        }
        switch (i)
        {
            //  �������: (��������� ������� ��������� ������ �� ��� / 12) * ���������� ����� * �� ��������� �����������\

            // 4) ��������� �������������� �������������� ������ :
            //  a.������� ������ ������� ������� � ����� � ������� ������ ������� ��
            //  ������� ���� ����������(��������, ��������(�������), ��������, ���������,
            //  ��������); (2 �����) (������������ ��� ��� ������� ������� �� �����).

            // 4) ��������� �������������� �������������� ������ :
            //  c.������� ������ ������� ������� � ��� � ������� ������ ������� ��
            //  ������� ���� ����������(��������, ��������(�������), ��������, ���������,
            //  ��������); (2 �����)

            // 4) ��������� �������������� �������������� ������ :
            //  e.������� ������ ������� ������� � ���� � ������� ������ ������� ��
            //  ������� ���� ����������(��������, ��������(�������), ��������, ���������,
            //  ��������); (2 �����)

        case 0: cout << " | [������� �� ���] = " << (double)((buff / 12) * car * 0.158642 * 12) << " | [������� �� �����] = " << (double)((buff / 12) * car * 0.158642) << " | [������� �� ����] = " << (double)(((buff / 12) * car * 0.158642) / 30) << " |"; break;
        case 1: cout << " | [������� �� ���] = " << (double)((buff / 12) * middlecar * 0.199352 * 12) << " | [������� �� �����] = " << (double)((buff / 12) * middlecar * 0.199352) << " | [������� �� ����] = " << (double)(((buff / 12) * middlecar * 0.199352) / 30) << " |"; break;
        case 2: cout << " | [������� �� ���] = " << (double)((buff / 12) * truck * 0.290802 * 12) << " | [������� �� �����] = " << (double)((buff / 12) * truck * 0.290802) << " | [������� �� ����] = " << (double)(((buff / 12) * truck * 0.290802) / 30) << " |"; break;
        case 3: cout << " | [������� �� ���] = " << (double)((buff / 12) * bus * 0.24021 * 12) << " | [������� �� �����] = " << (double)((buff / 12) * bus * 0.24021) << " | [������� �� ����] = " << (double)(((buff / 12) * bus * 0.24021) / 30) << " |"; break;
        case 4: cout << " | [������� �� ���] = " << (double)((buff / 12) * moto * 0.1398 * 12) << " | [������� �� �����] = " << (double)((buff / 12) * moto * 0.1398) << " | [������� �� ����] = " << (double)(((buff / 12) * moto * 0.1398) / 30) << " |"; break;
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

