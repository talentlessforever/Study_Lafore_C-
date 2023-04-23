/* Задание:

12. Модифицируйте калькулятор, созданный в упражнении 12 главы 4, так,
чтобы каждая арифметическая операция выполнялась с помощью функ-
ции. Функции могут называться fadd(), fsub(), fmul() и fdiv(). Каждая из
функций должна принимать два структурных аргумента типа fraction и воз-
вращать значение того же типа.

Решение:
*/ 

#include <iostream>
#include <iomanip>
using namespace std;
struct fraction
 {
 int numerator;
 int denominator;
};

fraction a,b, sumf;

fraction fadd(fraction&, fraction&);
fraction fsub(fraction&, fraction&);
fraction fmul(fraction&, fraction&);
fraction fdiv(fraction&, fraction&);

int main()
{

 char ch = '/', zn;
 do
 {
  cout << "enter 1-st fraction" << endl;
  cin >> a.numerator >> ch >> a.denominator;
  cout << "Enter symbol" << endl;
  cin >> zn;
  cout << "enter 2-nd fraction" << endl;
  cin >> b.numerator >> ch >> b.denominator;
  switch (zn)
  {
   case '+':  fadd(a,b); break;
   case '-':  fsub(a,b); break;
   case '*':  fmul(a,b); break;
   case '/':  fdiv(a,b); break;
  }
  cout << sumf.numerator << ch << sumf.denominator << endl;
  cout << "esche raz? (y,n)" << endl;
  cin >> ch;
 }
 while (ch != 'n');
 return 0;                                                    
}

fraction fadd(fraction& a, fraction& b)
{
sumf.numerator =(a.numerator * b.denominator + a.denominator * b.numerator);
sumf.denominator = a.denominator * b.denominator;
return sumf;
}
fraction fsub(fraction&, fraction&)
{
sumf.numerator = a.numerator * b.denominator - a.denominator * b.numerator;
sumf.denominator = a.denominator * b.denominator;
return sumf;
}

fraction fmul(fraction&, fraction&)
{
sumf.numerator = a.numerator * b.numerator;
sumf.denominator = a.denominator * b.denominator;
return sumf;
}
fraction fdiv(fraction&, fraction&)
{
sumf.numerator = a.numerator * b.denominator;
sumf.denominator = a.denominator * b.numerator; 
return sumf;
}