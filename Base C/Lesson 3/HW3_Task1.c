// Задача 1. Наибольшее из пяти чисел
// Ввести пять чисел и вывести наибольшее из них
// Нужно напечатать наибольшее число
// Данные на входе: Пять целых чисел разделенных пробелом
// Данные на выходе: Одно целое число

#include <stdio.h>

int main(void){
    int n[5];
    scanf("%d %d %d %d %d", &n[0],&n[1], &n[2], &n[3], &n[4]);
    int max = n[0];
    for (int i=1; i < 5; i++){
        max = max > n[i]?max:n[i];
    }
    printf("%d\n", max);
}