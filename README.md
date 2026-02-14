# C-Project-1
# C-Language-Project-1
C Programming Practical File
This repository contains basic C language programs written for academic practicals and examinations. All programs are simple, menu-free, and beginner friendly.

Program 1: Temperature Converter (Celsius to Fahrenheit)
Aim:
To write a C program that converts temperature from Celsius to Fahrenheit.

Formula:
F = (9 / 5 × C) + 32

Input:
Temperature in Celsius (user input)
Output:
Temperature in Fahrenheit
Source Code:
#include <stdio.h>

Temperature

#include<stdio.h>

int main(){
     
    int temperature,celsius;

     printf("\nThe Temperature Is in celsius :");

     scanf("%d",&temperature);

     celsius = (9.0/5.0 * temperature ) + 32;

     printf("The temperature in fahrenheit = %.1d",celsius);

    return 0;
}


Gross


#include<stdio.h>

int main(){
    float baseSalary, grossSalary,HRA,DA,TA ;

    printf("Base salary :");
    scanf("%f",&baseSalary);

    printf("Enter your HRA :");
    scanf("%f",&HRA);

    printf("Enter your DA : ");
    scanf("%f",&DA);

    printf("Enter your TA :");
    scanf("%f",&TA);


    grossSalary = baseSalary + (baseSalary * HRA/100) + (baseSalary * DA / 100 ) + (baseSalary * TA / 100);


    printf("Gross Salary : Rs %.1f", grossSalary);

    return 0;
}





#include<stdio.h>

int main(){
     
    int first,second,third;

    printf("first triangle : -");
    scanf("%d",&first);

    printf("second triangle : -");
    scanf("%d",&second);

    third = 180 - (first * second);

    printf("Third angle = %d ",third);

    return 0;
}
