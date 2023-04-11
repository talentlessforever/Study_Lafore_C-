/* Задание:

*2. Возведение числа n в степень р — это умножение числа n на себя р раз.
Напишите функцию с именем power(), которая в качестве аргументов при-
нимает значение типа double для n и значение типа int для р и возвращает
значение типа double. Для аргумента, соответствующего степени числа, за-
дайте значение по умолчанию, равное 2, чтобы при отсутствии показателя
степени при вызове функции число n возводилось в квадрат. Напишите
функцию main(), которая запрашивает у пользователя ввод аргументов для
функции power(), и отобразите на экране результаты ее работы.

Решение:
*/ 

#include <iostream>
using namespace std;

double power(double, int);

int main() 
{
    const int squared = 2;

    double number;

    cout << "Enter the number: \n"; 

    cin >> number;

    cout << "the square of the number equal to: "; power(number, squared);

    return 0;
}

double power(double n, int sq)
{
    double n2 = n;
    for(n2, n, sq; sq > 1; sq--) 
    {
       n2 *= n;
    }
    cout << n2 << endl;

    return 0;

}