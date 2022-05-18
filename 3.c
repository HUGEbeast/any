#include <math.h>
#include <stdio.h>

int main()
{
  int c = 0;
  float h;
  float x = 0;
  printf("Enter h ");
  scanf("%f", &h);
  int n = round(2 / h);
  printf("x\t\tf(x)\n--------------------\n");

  while (c != n + 1)
  {
    x = h * c;

    if (x <= 1)
      printf("%f %f\n", x, x * atan(x));

    else
      printf("%f %f\n", x, sin(1 / pow(x, 2)));
    c++;
  }

  return 0;
}