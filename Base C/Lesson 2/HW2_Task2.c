//Домашнее задание 2
//Задача 2. Сумма и произведение трех чисел

#include <stdio.h>

int main (void)
{
    long num1, num2, num3, sum, pro;

    //ввод данных
    printf("введите три целых числа через пробел: ");
    scanf("%ld %ld %ld", &num1, &num2, &num3);

    //вычисление
    sum = num1 + num2 + num3;
    pro = num1*num2*num3;

    //вывод результата
    printf("результат вычисления\n");
    printf("%ld + %ld + %ld = %ld \n", num1, num2, num3, sum);
    printf("%ld * %ld * %ld = %ld \n", num1, num2, num3, pro);

    return 0;
}