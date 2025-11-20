#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    printf("Input for the first matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Input for the second matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        
    }
    return 0;
}


