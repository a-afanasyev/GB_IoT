// Задача 3. Все цифры четные
// Ввести целое число и определить, верно ли, что все его цифры четные
// Данные на входе: Одно целое число
// Данные на выходе: YES или NO

#include <stdio.h>

int main(void){
    int num, dig;
    //enter the number
    scanf("%d", &num);
    //convert negative to positive
    if (num < 0){
        num = -num;
    }
    
    while (num > 0){
        dig = num % 10; 
        if (dig % 2 !=0){ 
            printf("NO\n");
            return 0;
        }
        num /= 10; 
    }
    printf("YES\n"); 
}