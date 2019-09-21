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
    cout << "А очередб на следущую пару такова:" << endl;

    //Массив имён студентов
    string names[19]={
    "Егор Фаламеев",
    "Валерий Ямалиев",
    "Илья Егоров",
    "Анастасия Шурак",
    "Андрей Тарасов",
    "Отабек Абдукаримов",
    "Любовь Примак",
    "Инга Абрамова",
    "Антон Шибалов",
    "Антон Касатиков",
    "Ксения Алексеева",
    "Никита Колесник",
    "Александр Немиров",
    "Анастасия Авдеева",
    "Фёдор Лучин",
    "Светлана Маркова",
    "Павел Кузьминский",
    "Константин Пилипчук",
    "Сергей Ульянов"};

    srand(time(0));

    student students[19];

    for(int i=0; i<19;i++)
    {
        students[i].name = names[i];
        students[i].randomnumber = rand() % 10000;
    }

    //сортировка по возрастанию randomnumber
    for(int i=0;i<19;i++)
    {
        for(int j=i; j<19;j++)
        {
            if (students[j].randomnumber < students[i].randomnumber)
            {
                //свапнуть студентов
                student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    for(int i=1; i<20; i++)
        cout << i << ") " << students[i-1].name <<", счастливое число - "<< students[i-1].randomnumber << endl;
    cin.get();
    return 0;
}
