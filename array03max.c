#include<stdio.h>
int main()
{
    int i,a[5]={23,35,43,32,45};
    int max=a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    
}
