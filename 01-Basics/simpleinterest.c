/* Write a C program to calculate simple interest */
#include<stdio.h>
int main(){

//Declaration of Variables
float p;//pricipal amount
float r;//rate of interest
float t;//time period
float si;//simple interest

//User inputs the required values
printf("\nEnter the value of principal: ");
scanf("%f",&p);
printf("\nEnter the value of rate: ");
scanf("%f",&r);
printf("\nEnter the value of time: ");
scanf("%f",&t);

//Applying standard formula1222
si=(p*r*t)/100;

//Printing the result
printf("\nThe simple interest is: %.2f",si);
return 0;
}
