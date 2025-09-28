#include <stdio.h>
int main()
{
    int flag = 1, i, j, a[2][2], b[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element for 2x2 matrix :");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("It's a symmetric matrix");
    }
    else
    {
        printf("It's not a symmetric matrix");
    }
    return 0;
}