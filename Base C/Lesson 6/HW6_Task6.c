// Задача 6. Возвести в степень
// Написать рекурсивную функцию возведения целого числа n в степень p.
// int recurs_power(int n, int p)
// Используя данную функцию, решить задачу.
// Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
// Данные на выходе: Одно целое число n в степени p

#include <stdio.h>

int recurs_power (int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n*recurs_power(n, p-1);
}

int main()
{
    int n, p;
    printf("Enter the number n:\n");
    scanf("%d", &n); 
    printf("Enter the power p:\n");
    scanf("%d", &p);

    printf("The %d in power %d is %d\n", n, p, recurs_power(n,p));
    return 0;
}