#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter symbols you want to count...");
    unsigned char abc;
    scanf("%c", &abc);
    
    //printf("%c", abc);

    unsigned char one = getch();
    printf("%c", one);
    unsigned char two = getch();
    printf("%c", two);
    unsigned char three = getch();
    printf("%c", three);
    int q = 1 ;
    unsigned char c;
    while (1)
    {
        c = getch();
        printf("%c", c);
        if (c == 0)
        {
            c = getch();
        }
        else if (c == 224)
        {
            c = getch();
            continue;
        }
        if (c == 27)
        {
            break;
        }
        else if (c == one)
        {
            c = getch();
            printf("%c", c);
            if (c == two)
            {
                c = getch();
                printf("%c", c);
                if (c == three)
                {
                    q++;
                }
            }
        }
    }
    printf("\n");
    printf("\nAAnswer: %d\n", q);
    return 0;
}