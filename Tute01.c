#include<stdio.h>

int main()

{
	int mark1 , mark2; //define variables
	float avg;
	
	printf("Enter the first mark :");  //Ask user to input mark1
	scanf("%d" , &mark1);
	
	printf("Enter the second mark :"); //ask uer to input mark2
	scanf("%d" , &mark2);
	
	avg = (float)(mark1 + mark2)/2;   //Calculation for average
	
	printf("Average : %.2f" , avg);   //printing average
	
	return 0;  //End of the process
	
}