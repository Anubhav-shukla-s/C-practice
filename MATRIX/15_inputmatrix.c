#include<stdio.h>
int main()
{
    int j,a[3][5];
    for (int i = 0; i < 3; i++)
    {
        printf("Now %d row\n",i);
        for (int j = 0; j < 5; j++)
        {
            printf("Give your next element : ");
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",a[i][j]);
        }
        
    }
    
    
}