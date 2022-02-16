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