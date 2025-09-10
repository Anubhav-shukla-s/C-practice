#include<stdio.h>
int main()
{
    int min=100,max=0,j,a[3][5];
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
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j]>max)
            {
                max=a[i][j];
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j]<min)
            {
                min=a[i][j];
            }
            
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

    printf("\nMAX=%d",max);
    printf("\nMIN=%d",min);

    return 0;
    
    
}