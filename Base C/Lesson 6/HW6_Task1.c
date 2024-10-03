// Задача 1. В прямом порядке
// Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
// void print_num(int num)

#include <stdio.h>

void print_num(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        
    } 
    else
    {
        print_num(n / 10);
        printf("%d ", n % 10);
    }
}

int main()
{   
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    print_num(n);
    printf("\n");
    return 0;
}