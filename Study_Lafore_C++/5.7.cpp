/* Задание:

7. Взяв в качестве основы функцию power() из упражнения 2, работающую
только со значением типа double, создайте перегруженные функции с этим
же именем, принимающими в качестве аргумента значения типа char, int,
long и float. Напишите программу, вызывающую функцию power() со все-
ми возможными типами аргументов.

Решение:
*/ 

#include <typeinfo>
#include <iostream>
using namespace std;

double power(double, int=2);

double power(char, int=2);

double power(int, int=2);

double power(long, int=2);

double power(float, int=2);


 double n;
 int p = 2;

int main() 
{

cout << "double number: " << power (2.546,2) << endl;

cout << "char number: " << power ('r',2) << endl;

cout << "int number: " << power (3,2) << endl;

cout << "long number: " << power (4L,2) << endl;

cout << "float number: " << power (5.2F,2) << endl;
return 0;
}


double power(double n, int pow)
{
    double res = n;
 for (int j=1; j < pow; j++)
 res *= n;

 return res;
}

double power(char n, int pow)
{
    char res = n;
 for (int j=1; j < pow; j++)
 res *= n;

 return res;
}
double power(int n, int pow)
{
    int res = n;
 for (int j=1; j < pow; j++)
 res *= n;
 
 return res;
}
double power(long n, int pow)
{
    long res = n;
 for (int j=1; j < pow; j++)
 res *= n;

 return res;
}
double power(float n, int p)
{
 float res = n;
 for (int j=1; j < p; j++)
 res *= n;
 return res;
}
