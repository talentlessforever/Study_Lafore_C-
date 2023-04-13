/* Задание:

8. Напишите функцию с именем swap(), обменивающую значениями два сво-
их аргумента типа int (обратите внимание, что изменяться должны значе-
ния переменных из вызывающей программы, а не локальных переменных
функции). Выберите способ передачи аргументов. Напишите вызывающую
программу main(), использующую данную функцию.

Решение:
*/ 

#include <iostream>
using namespace std;

void swap(int&, int&);

int main() 
{
    int a,b,c;

    cout << "Enter two numbers for swap: ";

    cin >> a >> b;

    
    cout << "Swap number: ";

    swap(a,b);
}

void swap(int& num1, int& num2) 
{
    int temp;

    temp = num1;

    num1 = num2;

    num2 = temp;

    cout << num1 << " " << num2;
}