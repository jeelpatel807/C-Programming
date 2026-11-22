/* Write a C program to make a calculator which all arithmetic operations such as addition, subtraction, multiplication and division taking two numbers as input from user*/
#include<stdio.h>
#include<conio.h>
int main(){
float num1,num2,add,sub,mul,div;
printf("\nEnter the first number: ");
scanf("%f",&num1);
printf("\nEnter the second number: ");
scanf("%f",&num2);
add = num1 + num2;
sub = num1 - num2;
mul = num1 * num2;
div = num1 / num2;
printf("\nThe result of addition is: %.2f",add);
printf("\nThe result of subtraction is: %.2f",sub);
printf("\nThe result of multiplication is: %.2f",mul);
printf("\nThe result of division is: %.2f",div);
return 0;
}
