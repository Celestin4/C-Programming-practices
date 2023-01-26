

#include<stdio.h>
int main(void) {
    char firstName[20], lastName[20], department[30];
    char district[20];
    int phoneNumber, yearOfStudy;
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", &lastName);
    printf("Enter your department name: ");
    scanf("%s", &department);
    printf("Enter your district: ");
    scanf("%s", &district);
    printf("Enter your year of study: ");
    scanf("%d", &yearOfStudy);
    printf("Enter your phone number: ");
    scanf("%d", &phoneNumber);
    printf("Your names are:  %s %s \n", firstName, lastName);
    printf("Your department name: %s\n", department);
    printf("Your district: %s\n", district);
    printf("Year of study: %d\n", yearOfStudy);
    printf("Phone number: %d\n", phoneNumber);
    printf("Thank for your information provided");
    return 0;

}
