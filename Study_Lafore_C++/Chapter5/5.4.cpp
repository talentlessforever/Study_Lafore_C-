/* Задание:

4. Напишите функцию, принимающую в качестве аргументов два значения
типа Distance и возвращающую значение наибольшего из аргументов (не-
обходимую информацию можно найти в примере RETSTRC).

Решение:
*/ 

#include <iostream>
using namespace std;

struct Distance 
{
    int feet;
    float inches;
};

void HighDist(Distance, Distance&);

int main()
{
    Distance a, b;
    cout << "Enter first feet and inches: "; cin >> a.feet >> a.inches;

    cout << "Enter second feet and inches: "; cin >> b.feet >> b.inches;

    cout << "The biggest value: ";
    
    HighDist(a, b);
    
}

void HighDist(Distance aa, Distance& bb)
{
float a_value = (aa.feet*12) + aa.inches;
float b_value =(bb.feet*12) + bb.inches;

a_value > b_value ? cout << aa.feet << " " << aa.inches : cout << bb.feet << " " << bb.inches;
}
