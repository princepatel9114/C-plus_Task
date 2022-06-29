#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], c, i, j;
    for (i = 1; i <= 3; i++)
    {

        for (j = 1; j <= 3; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
        for (j = 1; j <= 3; j++)
        {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        for (j = 1; j < 7; j++)
        {
            if (i == 2 && j == 5)
                printf(" + ");
        }
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d", b[i][j]);
        }

        for (j = 1; j < 7; j++)
        {
            {
                if (i == 2 && j == 5)
                    printf(" = ");
            }
        }
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    printf("diagram total=%d", a[1][1] + a[2][2] + a[3][3]);
    printf("\n upper total=%d", a[1][2] + a[1][3] + a[2][3]);
    printf("\n lower total=%d", a[2][1] + a[3][1] + a[3][2]);
    getch();
}