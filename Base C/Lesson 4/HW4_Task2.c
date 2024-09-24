// Задача 2. Ровно три цифры
// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
// Данные на входе: Целое положительное число
// Данные на выходе: Одно слово: YES или NO

#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d", &n);
//check is n positive
    if (n < 0){
        printf("NO\n");
        return 0;
    }
//calc numbers
    while (n != 0){
        n /= 10;
        count ++;
    }
//check count of numbers 
    if (count !=3 ){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    
}