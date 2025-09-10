#include<stdio.h>
int main()
{
    int j, a[2][3]={{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++)
    { printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        
    }
    return 0;
}