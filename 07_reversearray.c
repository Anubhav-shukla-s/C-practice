#include <stdio.h>
int main()
{
    int i,a[5]={34,23,45,65,43};
    for (int i = 4; i >=0; i--)
    {
        printf("%d ",a[i]);
        
    }
    printf("%d",a[0]);
    return 0;
}