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