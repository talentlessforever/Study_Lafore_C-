/* Задание:

10. Напишите функцию, которая при каждом вызове будет выводить на эк-
ран количество раз, которое она вызывалась ранее. Напишите программу,
которая будет вызывать данную функцию не менее 10 раз. Попробуйте
реализовать данную функцию двумя различными способами: с использо-
ванием глобальной переменной и статической локальной переменной для
хранения числа вызовов функции. Какой из способов предпочтительней?
Почему для решения задачи нельзя использовать обычную локальную пе-
ременную?

Решение:
*/ 

// 1. Стат. лок. переменная предпочтительнее, т к доступ к ней имеет только одна функция. 
// 2.Локальную переменную нельзя использовать, т к после завершения функции ее значение теряется

// С СТАТ. ЛОК. ПЕРЕМЕННОЙ


#include <iostream>
using namespace std;

int countfunc(int);

int c;
int main()
{


int a = 0;
do {

c = countfunc(a);

} while(c < 15);
cout << "Number of function calls: " << c;

}


int countfunc(int a)
{
    static int count;
    count++;
    a = (a + 2) * 2;
    cout << "I was called: " << count << "times" << endl;
    return count;
}


// С ГЛОБАЛЬНОЙ ПЕРЕМЕННОЙ:


// #include <iostream>
// using namespace std;

// int countfunc(int);
// int count = 0;

// int main()
// {

// int a = 0;

// do {

// countfunc(a);

// } while(count < 15);
// cout << "Number of function calls: " << count;

// }


// int countfunc(int a)
// {
//     count++;
//     a = (a + 2) * 2;
//     cout << "I was called: " << count << "times" << endl;
//     return count;
// }
