/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax here
if(agi>0 && agi<19900)
{
  tax=agi;
  tax=(tax/100)*10;
}
else if (agi>=19900 && agi<81050)
{
  tax=agi;
  tax=((tax+1990)/100)*12;
}
else if (agi>=81050 && agi<172750)
{
  tax=agi;
  tax=((tax+9328)/100)*22;
}
else if(agi>=172750 && agi<329850)
{
  tax=agi;
  tax=((tax+29502)/100)*24;
}
else if(agi>=329850 && agi<418850)
{
  tax=agi;
  tax=((tax+67206)/100)*32;
}
else if(agi>418850 && agi<628300)
{
  tax=agi;
  tax=((tax+95686)/100)*35;
}
else if(agi>=628301)
{
  tax=agi;
  tax=((tax+168933.50)/100)*37;
}

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
