#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi;
  char c;
  double tax;
  double childCredit;
  double totalTax;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  //compute the tax, child credit, and total tax:


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("totalTax:     $%10.2f\n", totalTax);

  return 0;
}
