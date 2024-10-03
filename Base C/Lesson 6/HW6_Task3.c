// Задача 3. Количество 1
// Дано натуральное число N. Посчитать количество «1» в двоичной записичисла.
// Данные на входе: Натуральное число
// Данные на выходе: Целое число - количество единиц в двоичной записи числа.

#include <stdio.h>

int ones_count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 2) + ones_count (n / 2);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int result = ones_count(n);
    printf("The number of ones in Dec of %d is %d \n", n, result);
    return 0;
}