#include <stdio.h>
int main()
{
    int nsum = 0, sum = 0, a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element for 3x3 matrix :");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            if (i + j == 2)
            {
                nsum = nsum + a[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        
    }
    
    printf("\n%d", sum);
    printf("\n%d", nsum);
}