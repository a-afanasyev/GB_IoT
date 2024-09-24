// Задача 3. Сумма цифр равна произведению
// Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
// int is_happy_number(int n)
// Данные на входе: Целое не отрицательное число
// Данные на выходе: YES или NO
#include <stdio.h>

int is_happy_number(int n)
{
    int answ = 0;
    for (int i = 10; i<=n; i++)
    {
        int sum =0, mult = 1;
        int num = i;
        //вычисляем сумму и произведение
        while (num > 0)
        {
            int dig = num % 10;
            sum +=dig;
            mult *=dig;
            num /=10;
        }
        //проверяем на "счастливость"
        if (sum == mult)
            answ = 1;
        else
            answ = 0 ;
    }
    //выводим результат
    return answ;
}

int main(void)
{
    int n;
    //запрашиваем число
    printf("Enter the number:");
    scanf("%d", &n);
    //выводим результат
    printf("%s \n", (is_happy_number(n) == 1)? "YES":"NO");
    return 0;
}