// Задача 2. От A до B
// Составить рекурсивную функцию. Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.

#include <stdio.h>

void print_numbers(int a, int b)
{
    if (a <= b)
    {
        printf("%d ", a);
        if (a != b)
        {
            print_numbers(a + 1, b);
        }
    }
    else
    {
        printf("%d ", a);
        if (a != b)
        {
            print_numbers(a - 1, b);
        }
    }
}

int main()
{
    int a, b;
    printf("Etner a and b: ");
    scanf("%d %d", &a, &b);
    print_numbers(a, b);
    printf("\n");
    return 0;
}