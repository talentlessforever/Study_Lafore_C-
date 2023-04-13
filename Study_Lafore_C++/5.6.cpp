/* Задание:

6. Модифицируйте программу, описанную в упражнении 11 главы 4 «Струк-
туры», складывающую два структурных значения типа time. Теперь про-
грамма должна включать в себя две функции. Первая, time_to_secs(), при-
нимает в качестве аргумента значение типа time и возвращает эквивалентное
значение в секундах типа long. Вторая, secs_to_time(), в качестве аргумента
принимает число секунд, имеющее тип long, а возвращает эквивалентное
значение типа time.
Решение:
*/ 

#include <typeinfo>
#include <iostream>
using namespace std;

struct time1 {
    int h, m, s;
};

long time_to_secs(time1);

time1 secs_to_time(long);

int main()
{
    time1 s_to_time;
    long total_sec;
    time1 a, b;
    char ch;
cout << "Enter the first time value(00:00:00:): "; cin >> a.h >> ch >> a.m >> ch >> a.s;

cout << "Enter the second time value(00:00:00:): "; cin >> b.h >> ch >> b.m >> ch >> b.s;

total_sec = time_to_secs(a) + time_to_secs(b);

cout << "converting time to seconds: " << total_sec << endl; 

s_to_time = secs_to_time(total_sec);

cout << "converting seconds to time(00:00:00): " << s_to_time.h << ":" << s_to_time.m << ":" << s_to_time.s << endl; 
}

long time_to_secs(time1 a) 
{
    long total_sec = ((a.h) * 60 + a.m) * 60 + a.s;

    return total_sec;
}

time1 secs_to_time(long total_secs)
{
    time1 a;

    a.m = total_secs / 60;

    a.s = total_secs % 60;

    a.h = a.m / 60;

    a.m %= 60;

    return a;
}