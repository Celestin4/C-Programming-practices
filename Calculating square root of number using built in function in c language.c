/*
Written by : NTEZORYAYO Celestin
Year: 2023

This is a program to compute a  square root of number from the user.

it am at teaching syntax for printf() and scanf() function which are provided by #include<stdio.h>

*/
#include<stdio.h>
int main() {
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    printf("The square root of %d is %f", number, sqrt(number));

}
