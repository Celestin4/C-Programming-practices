/*
Written by : NTEZORYAYO Celestin
Year: 2023

This is a program to compute a sum of two number  from the user.

it am at teaching syntax for printf() and scanf() function which are provided by #include<stdio.h>

*/

#include<stdio.h>
int main() {
    int number_1, number_2;
    printf("Enter your first number: ");
    scanf("%d", &number_1);
    printf("Enter your first number: ");
    scanf("%d", &number_2);
    printf("%d + %d = %d", number_1, number_2, number_1 + number_2);
}
