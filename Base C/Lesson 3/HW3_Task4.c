// Задача 4. Какое время года
// Ввести номер месяца и вывести название времени года.
// Данные на входе: Целое число от 1 до 12 - номер месяца.
// Данные на выходе: Время года на английском: winter, spring, summer, autumn

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter month number:");
    scanf("%d", &n);
    printf("%s \n ", ( (n==1) || (n==2) || (n==12))?"Winter":(( (n==3) || (n==4) || (n==5))?"Spring":(( (n==6) || (n==7) || (n==8))?"Summer":"Autumn")));

}