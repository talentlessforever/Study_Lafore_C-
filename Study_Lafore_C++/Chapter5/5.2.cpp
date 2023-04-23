/* Задание:

*3. Напишите функцию с именем zeroSmaller(), в которую передаются с по-
мощью ссылок два аргумента типа int, присваивающую меньшему из ар-
гументов нулевое значение. Напишите программу для проверки работы
функции.

Решение:
*/ 

#include <iostream>
using namespace std;

void zeroSmaller(int, int&);

int main() 
{
    int a,b;

    cout << "Enter the numbers: "; cin >> a >> b;

    cout << "Numbers: ";

    zeroSmaller(a,b);
    return 0;
}

void zeroSmaller(int a1, int& b2)
{

    if(a1 > b2) {
    b2 = 0;
    }
    else if (b2 > a1){
    a1 = 0;
    }
    cout << a1 << " " << b2;
}