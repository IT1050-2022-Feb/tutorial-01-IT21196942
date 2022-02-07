/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
 
{
	float avg;
	int marks1,marks2;
	printf("enter the marks 1 :");
	scanf("%d",&marks1);
	printf("enter the marks 2 :");
	scanf("%d",&marks2);
	
	avg = (marks1 + marks2)/2;
	printf("Average Marks = %.2f ",avg);
	
	

  return 0;
}

