#include <math.h>
#include <stdio.h>
int main()
{
  double n;
  double sum = 0;
  double h = 0.02;
  double prev_I;

  printf("Enter n: ");
  scanf("%lf", &n);

  do
  {
    prev_I = sum;
    sum = 0;
    h /= 2.0;
    for (int i = 0; i < 2 / h; i++)
    {
      if (i * h <= 1)
        sum += pow(i * h + h / 2.0, 2) * atan(i * h + h / 2.0);
      else
        sum += sin(1 / pow(i * h + h / 2.0, 2));
    }
    sum *= h;
  } while (fabs(sum - prev_I) / 3.0 >= n);

  printf("%lf", sum);
  return 0;
}