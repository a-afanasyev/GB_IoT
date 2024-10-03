// Задача 5. Сколько раз встречается символ a
// Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка. Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода и возвращает целое число – количество символов 'a' в данной строке.
// int acounter(void)
// Используя данную функцию решить задачу

#include <stdio.h>

int a_count(void)
{
    char c;
    c = getchar();
    if (c == '.')
    {
        return 0;
    }
    if (c == 'a')
    {
        return 1 + a_count();
    }
    else
    {
        return a_count();
    }
}

int main()
{
    printf("Enter the string ('.' in the end):\n");
    printf("The count of 'a' in string is %d\n", a_count());
    return 0;
}