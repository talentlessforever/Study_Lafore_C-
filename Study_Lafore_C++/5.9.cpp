/* Задание:

9. Переработайте программу из упражнения 8 так, чтобы функция swap()
принимала в качестве аргументов значения типа time (см. упражнение 6).
Решение:
*/ 

#include <iostream>
using namespace std;

struct Time {
    int h,m,s;
};
void swap(Time&, Time&);
Time a,b;
int main() 
{
    char ch;

    cout << "Enter the first time(00:00:00):  ";

    cin >> a.h >> ch >> a.m >> ch >> a.s;

    cout << "Enter the second time(00:00:00):  ";

    cin >> b.h >> ch >> b.m >> ch >> b.s;

    cout << "Current order of time: " << endl << a.h << ":" << a.m << ":" << a.s << endl
    << b.h << ":" << b.m << ":" << b.s << endl;
    
    cout << "Swap number: " << endl;

    swap(a,b);
}

void swap(Time& time1, Time& time2) 
{
    Time temp;

    temp = time1;

    time1 = time2;

    time2 = temp;

    cout << "First time: " << time1.h << ":" << time1.m << ":" << time1.s << endl;
    cout << "Second time: " << time2.h << ":" << time2.m << ":" << time2.s << endl;

}