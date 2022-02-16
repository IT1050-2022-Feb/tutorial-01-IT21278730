[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=6961353&assignment_repo_type=AssignmentRepo)
![logo](/resources/tutelogo.png)

## <div align="center">Tutorial 01</div>

## Objectives : Revise writing C Programs

This week we will revisit writing C programs.  In IT1050 the programming language you will use C++ is based on the C language and you have to use your C knowledge to write C++ programs

## Exercise 1 - Calculations

Write a C program to input marks of two subjects. Calculate and print the average of the two marks.

Program File - [Tute01.c](Tute01.c)
 
## Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

*	Input the distance the van has travelled
*	The first 30 km is at a rate of 50/= per km.
*	The remaining distance is calculated at the rate of 40/= per km.


e.g.

```
Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300 
```
Program File - [Tute02.c](Tute02.c)

## Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.
```
n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55
```
Program File - [Tute03.c](Tute03.c)

## Exercise 4 - Functions

Implement the three functions ```minimum()```, ```maximum()``` and ```multiply()``` below the ```main()``` function.

Do not change the code given in the main() function when you are implementing your solution.

```c
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
```
Program File - [Tute04.c](Tute04.c)

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

#include <stdio.h>
int main() {
  
  int i , n , a;  //define variables
  int sum;


  printf("Enter a value for n :");   //ask user to input value for n
  scanf("%d" , &n);

  for(i=1 ; i <= n ; i++)
  {
    sum += i;  // calculation

  }

      printf("\nSum = %d" , sum);  //print sum

  return 0;
}

#include <stdio.h>

int main() {

  int distance;   //define variables
  float amount;

  printf("\nEnter the distance :");   //Ask user to enter the distance
  scanf("%d" ,&distance);

  if(distance < 30 )    //condition
  {
    amount = (float)distance * 50;
  }

  else 
  {
    amount = (float)30 * 50 + (distance - 30) * 40;
  }
  
printf("\nAmount : %.2f" , amount);   //print amount

  return 0;
}

#include <stdio.h>


//function declaration
int minimum(int no1 , int no2);
int maximum(int no1 , int no2);
int multiply(int no1 , int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}


//function implementation
int minimum(int no1 , int no2)  //function to find minimum
{
int a;

  if(no1<no2)
  {
    return no1;

  }
  else
  {
    return no2;
  }

  }

  int maximum(int no1 , int no2)  //function to find maximum
  {
  int b;

  if(no1>no2)
  {
  return no1;
  }
  else
  {
    
   return no2;
  }


  }

  int multiply(int no1 , int no2)  //function to find multiplication
  {
    return no1 * no2;
  }