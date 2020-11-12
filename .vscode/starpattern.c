#include <stdio.h>
int pattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int reversepattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, a;
    printf("Enter the No. of Rows\n");
    scanf("%d", &rows);
    printf("enter 1 for triangular pattern\n enter 0 for reverse triangular pattern\n any other key for both\n");
    scanf("%d", a);
    if (a == 1)
    {
        pattern(rows);
    }
    else
    {
        reversepattern(rows);
    }

    return 0;
}