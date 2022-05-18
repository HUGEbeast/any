#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alloc(int N)
{
    int *A = (int *)malloc(N * N * sizeof(int));
    int *B = (int *)malloc(N * N * sizeof(int));
    int *C = (int *)malloc(N * N * sizeof(int));
    
    if (!A || !B || !C)
    {
        printf("Memory allocation error");
        exit(EXIT_FAILURE);
    }
}

void fill(int N, int array[][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            array[i][j] = rand() % 200 + 1;
}

void out(int N, int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%7d", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void umnozhen(int N, int A[][N], int B[][N], int C[][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main()
{
    srand(time(NULL));
    int N;
    scanf("%d", &N);
    int A[N][N], B[N][N], C[N][N];
    alloc(N);
    fill(N, A);
    fill(N, B);
    printf("A is \n");
    out(N, A);
    printf("B is \n");
    out(N, B);
    umnozhen(N, A, B, C);
    printf("The result is\n");
    out(N, C);
    free (*A); 
    free (*B);
    free (*C); 

    return 0;
}