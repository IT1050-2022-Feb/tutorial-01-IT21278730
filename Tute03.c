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

