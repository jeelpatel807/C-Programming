/* Write a C program to read marks of the students from keyboard and check whether the student is pass or fail */ 

#include<stdio.h>
int main(){

//Variable Declaration
float marks;

//User Input
printf("\nEnter the student's marks (0-100):  ");
scanf("%f",&marks);

//Check the condition regarding input
if(marks<0 || marks>100){
printf("\nInvalid Input !! Marks must be between 0 and 100.");
}

//Check the condition regarding passing condition
else if(marks>=35){
printf("\nResult is PASS.");
}

//Check the condition regarding failing condition
else{
printf("\nResult is FAIL.");
}

return 0;
}
