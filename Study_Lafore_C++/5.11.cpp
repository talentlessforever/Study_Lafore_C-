/* Задание:

11. Напишите программу, использующую структуру sterling, которая описана
в упражнении 10 главы 4. Программа должна получать от пользователя
значения двух денежных сумм, выраженных в фунтах, шиллингах и пен-
сах, складывать эти значения и выводить результат на экран в том же
формате. Необходимо разработать три функции. Первая из них должна
получать от пользователя число фунтов, шиллингов и пенсов и возвра-
щать соответствующее значение типа sterling. Вторая функция должна при-
нимать в качестве аргументов два значения типа sterling, складывать их и
возвращать значение, также имеющее тип sterling. Третья функция долж-
на принимать аргумент типа sterling и выводить его значение на экран.

Решение:
*/ 


#include <iostream>
using namespace std;
struct sterling
{
 int pounds;
 int shilling;
 int pens;
};

sterling s1, s2, sum;

char ch;

sterling first(sterling);

sterling sum1(sterling&, sterling&);

void third(sterling);


int main()
{

s1 = first(s1);
s2 = first(s2);

sum1(s1,s2);

third(sum);

 return 0;                                                    
}



sterling first(sterling a)
{
    cout << "Enter pounds, shillings and pens: " << endl; 

    cin >> a.pounds >> ch >> a.shilling >> ch >> a.pens;

    return a;
}




sterling sum1(sterling& a, sterling& b)
{
sum.pounds = a.pounds + b.pounds;

sum.shilling = a.shilling + b.shilling;

sum.pens = a.pens + b.pens;

sum.shilling = sum.shilling + (sum.pens / 12);

sum.pens %= 12;

sum.pounds += sum.shilling / 20;

sum.shilling %= 20;


return sum;
}


void third(sterling a)
{
    cout << "Sum: " << a.pounds << "." << a.shilling << "." << a.pens;

}