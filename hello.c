#include <stdio.h>
#include "cs50.h"

int main(void)
{
  int num1 = get_int("Num1: ");
  int num2 = get_int("Num2: ");
  printf("%i\n", num1 + num2);
  char go_on = get_char("Do you want to continue (y / n): ");
  if (go_on == 'y')
  {
    num1 = get_int("Num1: ");
    num2 = get_int("Num2: ");
    printf("%i\n", num1 + num2);
    go_on = get_char("Do you want to continue (y / n): ");
  }
  else
  {
    printf("Okay");
  }
}