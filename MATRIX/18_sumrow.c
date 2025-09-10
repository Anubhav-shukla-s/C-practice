#include <stdio.h>
int main()
{
    int j, a[3][5];
    int sum=0, snum=0;
    for (int i = 0; i < 3; i++)
    {
        printf("Now %d row\n", i);
        for (int j = 0; j < 5; j++)
        {
            printf("Give your next element : ");
            scanf("%d", &a[i][j]);
        }
    }
   for (int i = 0; i < 3; i++)
   {
    sum=0;
    for (int j = 0; j < 5; j++)
    {
        sum=sum+a[i][j];
    }
    printf("Row sum = %d\n",sum);
   }
   for (int i = 0; i < 5; i++)
   {
    snum=0;
    for (int j = 0; j < 3; j++)
    {
        snum=snum+a[j][i];
    }
    printf("column  sum = %d\n",snum);
   }
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    
}