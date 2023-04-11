/* Задание:

*1. Вернитесь к рассмотрению примера CIRCAREA главы 2 «Основы програм-
мирования на C++». Напишите функцию с именем circarea(), которая ана-
логичным образом вычисляет площадь круга. Функция должна принимать
один аргумент типа float и возвращать значение типа float. Напишите функ-
цию main(), которая просит пользователя ввести значение радиуса, вызы-
вает функцию circarea(), а затем отображает результат вычисления на экране.
#include <iostream> 

Решение:
*/ 

#include <iostream>
using namespace std;
//
float circarea(float, const float);
//

int main()
{

float rad;
//
const float PI = 3.14159F;
//
cout << "Введите радиус окружности: "; 
//
cin >> rad;
//
cout << "Площадь круга равна: " << circarea(rad, PI) << endl;
return 0;
}
//
float circarea(float rad1, const float PI)
{
    float area = PI * rad1 * rad1;
    cout << area;
    return 0;
}