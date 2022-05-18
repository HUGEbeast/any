#include <stdio.h>
#include <math.h>

int main()
{
    int c = 0;
    float h;
    float x = 0;
    printf("Enter h ");
    scanf("%f", &h);
    int n = round(2 / h);
    printf("x\t\tf(x)\n--------------------\n");

    for (int i = 0; i <= n; i++)
    {
        x = h * i;

        if (x <= 1)
            printf("%f %f\n", x, x * atan(x));

        else
            printf("%f %f\n", x, sin(1 / pow(x, 2)));
    }

    return 0;
}