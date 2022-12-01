#include <stdio.h>
#include "cs50.h"

int main(void)
{
  int i;
  for (i = 0; i < 500; i++)
  {
    float num1 = get_float("Write the first number: ");
    char process = get_char("What do you want (+, -, *, /): ");
    float num2 = get_float("Write the second number: ");
    if (process == '+')
    {
      printf("%f\n", num1 + num2);
    }
    else if (process == '-')
    {
      printf("%f\n", num1 - num2);
    }
    else if (process == '*')
    {
      printf("%f\n", num1 * num2);
    }
    else if (process == '/')
    {
      printf("%f\n", num1 / num2);
    }
    else
    {
      printf("Please write an oprator.\n");
    }
  }
}