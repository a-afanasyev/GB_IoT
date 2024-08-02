//Домашнее задание 2
//Задача 3.  Разность двух чисел

#include <stdio.h>

int main (void)
{
    long num1, num2, raz;

    //ввод данных
    printf("введите два целых числа через пробел: ");
    scanf("%ld %ld", &num1, &num2);

    //вычисление
    raz = num1 - num2;

    //вывод результата
    printf("результат вычисления\n");
    printf("%ld - %ld = %ld \n", num1, num2, raz);

    return 0;
}