#include<stdio.h>
int main()
{
    int i,sum=0,avg,a[5]={1,4,4,7,5};
     for (int i = 0; i < 5; i++)
     {
        sum=sum+a[i];
     }
     avg=sum/5;
     printf("%d",avg);
}