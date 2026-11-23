/* Write a C program to interchange two numbers using a temporary variable*/

#include<stdio.h>
int main(){
//Declaration of three variables
int a,b,c;
//Input of first number from the user
printf("\nEnter the value for a: ");
scanf("%d",&a);
//Input of second number from the user
printf("\nEnter the value for b: ");
scanf("%d",&b);
//Swapping two numbers using temporary variable(c)
c=a;
a=b;
b=c;
//Display the interchanged numbers
printf("\nThe value of a after swapping is: %d",a);
printf("\nThe value of b after swapping is: %d",b);
return 0;

}
