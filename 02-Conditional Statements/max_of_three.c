/* Write a C program to read three numbers from keyboard and find out maximum out of three (nested if else) */

#include<stdio.h>
int main(){

//Variable Declaration
int a,b,c;

//User Input of first number
printf("\nEnter the value of a: ");
scanf("%d",&a);

//User Input of second number
printf("\nEnter the value of b: ");
scanf("%d",&b);

//User Input of three number
printf("\nEnter the value of c: ");
scanf("%d",&c);

//Checking the conditions regarding result printing
if(a>b){
if(a>c){
printf("\na is largest out of three numbers.");
}
else{
printf("\nc is largest out of three numbers.");
}
}
else{
if(b>c){
printf("\nb is largest out of three numbers.");
}
else{
printf("\nc is largest out of three numbers.");
}
}
return 0;
}
