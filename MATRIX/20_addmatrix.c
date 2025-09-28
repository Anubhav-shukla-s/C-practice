#include<stdio.h>
int main()
{
    int a[2][2]={{2,3},{4,1}};
    int b[2][2]={{1,5},{3,2}};
    int c[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
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