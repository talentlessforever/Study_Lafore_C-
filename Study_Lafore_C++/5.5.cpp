/* Задание:

5. Напишите функцию с именем hms_to_secs(), имеющую три аргумента типа
int: часы, минуты и секунды. Функция должна возвращать эквивалент пе-
реданного ей временного значения в секундах (типа long). Создайте про-
грамму, которая будет циклически запрашивать у пользователя ввод значе-
ния часов, минут и секунд и выводить результат работы функции на экран.

Решение:
*/ 

#include <typeinfo>
#include <iostream>
using namespace std;

struct time1 {
    int h, m, s;
};

long hms_to_secs(int, int&, int&);

int main()
{
time1 time2;
char ch;
long total_seconds;

do {
    cout << "Enter the time (00:00:00): "; cin >> time2.h >> ch >> time2.m >> ch >> time2.s;

    total_seconds = hms_to_secs(time2.h, time2.m, time2.s);

    cout << "total sec: " << total_seconds << endl;

    cout << "type of the num: " << typeid(total_seconds).name() << endl;

    cout << "repeat (y/n) ? "; cin >> ch;

} while (ch != 'n');

}

long hms_to_secs(int hours, int& minutes, int& seconds) 
{
    long total_sec = (hours * 60 + minutes) * 60 + seconds;

    return total_sec;
}