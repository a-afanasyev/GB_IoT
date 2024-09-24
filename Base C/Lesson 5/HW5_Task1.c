// Задача 1. Сколько зерен на доске?
// Необходимо составить функцию, которая определяет, сколько зерен попросил положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …)
// Данные на входе: Целое число от 1 до 64
// Данные на выходе: Одно целое число. Количество зерен на данной клетке.

#include <stdio.h>

//функция подсчета зерен
unsigned long grains_qty(int n)
{
    unsigned long grains = 1;
    //запускаем цикл вычисления степени 2
    for (int i=1; i<n; i++)
    {
        grains *= 2;
    }
    //возвращаем результат
    return grains;
}

int main()
{
    int n;
    //запрашиваем номер клетки
    printf("Enter number (1-64):");
    scanf("%d",&n);
    //проверяем диапазон
    if (n<1 || n>64) //если число вне диапазона выдаем ошибку
    {
        printf("Erorr. The number is out of limits (1-64)\n");
        return 0;
    }
    //выводим результат
    printf("The qty of grains on sqare %d is %lu\n", n, grains_qty(n));
    return 0;
}