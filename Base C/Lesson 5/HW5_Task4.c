// Задача 4. Сумма от 1 до N
// Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

#include <stdio.h>

//объявляем функцию расчета суммы
int sum(int n)
{
    int s = 0;
    //вычисляем сумму всех чисел до числа включительно
    for(int i=1; i<=n; i++) s+=i;
    return s;
}

int main()
{
    int n;
    //запрашиваем число
    printf("Enter number:");
    scanf("%d", &n);
    //выводим результат
    printf("%d \n", sum(n));
    return 0;
}