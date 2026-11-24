/* Write a C program to print Fibonacci series of first n numbers*/
#include<stdio.h>
int main(){
//Declaration of variables
int a;//first number
int b;//second number
int c;//third number
int n;//user input
int i;//for the use of "for loop"
printf("\nEnter the number n: ");
scanf("%d",&n);
//Assigning initial values
a=0;
b=1;
c=0;
//Printing the assigned values
printf("%d ",a);
printf("%d ",b);
for(i=2;i<n;i++){
c=a+b;//Assigning new value to c
printf("%d ",c);//Printing the assigned value
//Assigning new values for next iteration
a=b;
b=c;
}
return 0;
}
