/**
 * Author: 
 * Date: 
 * 
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      printf("%f", a + b);
      break;
    case 2:
      result = a - b;
      printf("%f", result);
      break;
    case 3:
      //TODO: handle this case    
    case 4:
      //TODO: handle this case
    case 5:
      //TODO: handle this case
    case 6:
      //TODO: handle this case
    case 7:
      //TODO: handle this case
    default:
      printf("Please input a valid operator next time");
  }

  return 0;
}
