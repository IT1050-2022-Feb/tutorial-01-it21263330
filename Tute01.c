/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
   	int English,Maths;
	printf("Enter the mark of English : ");
	scanf("%d",&English);
	
	printf("Enter the marks of Maths : ");
	scanf("%d",&Maths);
	
	int avg=(English+Maths)/2;
	
	printf("Average marks %d:", avg);
   
  
  return 0;
}

