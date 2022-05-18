#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int find(char *str)
{
    int flag = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '.' && !flag)
            flag = 1;
        else if (str[i] == '.' && flag)
            return 0;
        if (!isdigit(str[i]) && str[i] != '\n' && str[i] != '.')
            return 0;
    }
    return 1;
}
int main()
{
    float sum = 0;
    int count = 0;
    char str[256];
    fgets(str, 256, stdin);
    char delim[] = ", ";
    char *p = strtok(str, delim);
    if (find(p))
    {
        sum += atof(p);
        count++;
    }
    while (p = strtok(NULL, delim))
    {
        if (find(p))
        {
            sum += atof(p);
            count++;
        }
    }
    printf("%f", sum / count);
    return 0;
}