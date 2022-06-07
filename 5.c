#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int q(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return (n % 2) ? 0 : q(n / 2);
}
int z(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    while (!(n % 2))
    {
        n = n / 2;
        if (n == 1)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (z(n) && q(n))
    {
        printf("cycle: this is a power of 2 (%d\n", z(n));
        printf("recursion: this is a power of 2 (%d\n", q(n));
    }
    else
    {
        printf("cycle: This is NOT a power of 2 (%d\n", z(n));
        printf("recursion: This is NOT a power of 2 (%d\n", q(n));
    }
    return 0;
}