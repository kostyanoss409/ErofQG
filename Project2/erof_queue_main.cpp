#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct student
{
    string name;
    int randomnumber;
};


int main()
{
    setlocale(LC_ALL, "Russian");


    cout << "Erofeev queue generator v228.1488" << endl;
    cout << "� ������� �� �������� ���� ������:" << endl;

    //������ ��� ���������
    string names[19]={
    "���� ��������",
    "������� �������",
    "���� ������",
    "��������� �����",
    "������ �������",
    "������ �����������",
    "������ ������",
    "���� ��������",
    "����� �������",
    "����� ���������",
    "������ ���������",
    "������ ��������",
    "��������� �������",
    "��������� �������",
    "Ը��� �����",
    "�������� �������",
    "����� �����������",
    "���������� ��������",
    "������ �������"};

    srand(time(0));

    student students[19];

    for(int i=0; i<19;i++)
    {
        students[i].name = names[i];
        students[i].randomnumber = rand() % 10000;
    }

    //���������� �� ����������� randomnumber
    for(int i=0;i<19;i++)
    {
        for(int j=i; j<19;j++)
        {
            if (students[j].randomnumber < students[i].randomnumber)
            {
                //�������� ���������
                student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    for(int i=1; i<20; i++)
        cout << i << ") " << students[i-1].name <<", ���������� ����� - "<< students[i-1].randomnumber << endl;
    cin.get();
    return 0;
}
