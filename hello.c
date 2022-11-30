#include <stdio.h>
#include "cs50.h"

int main(void)
{
  float num1 = get_int("Write the first number: ");
  char process = get_char("What do you want (+, -, *, /): ");
  float num2 = get_int("Write the second number: ");
  if (process == '+')
  {
    printf("%f", num1 + num2);
  }
  else if (process == '-')
  {
    printf("%f", num1 - num2);
  }
  else if (process == '*')
  {
    printf("%f", num1 * num2);
  }
  else if (process == '/')
  {
    printf("%f", num1 / num2);
  }
  else
  {
    printf("Please write an oprator.");
  }
}