#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 19 - 9;
}

int order(int n, int a[])
{
    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return 0;
    return 1;
}

int change(int n, int a[])
{
    int abc = 0;
    while (!order(n, a))
    {
        int first = rand() % n;
        int second = rand() % n;
        int temp = a[first];
        a[first] = a[second];
        a[second] = temp;
        abc++;
    }
    return abc;
}

void out(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%4d", arr[i]);
    printf("\n");
}
int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int bcd = change(n, A);
    printf(" Number of changes: %d\n", bcd);
    out(A, n);
    return 0;
}