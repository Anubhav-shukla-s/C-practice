#include <stdio.h>
int main()
{
    int a[9]={12,34,45,56,65},b[4]={87,76,78,98};
    int c=5,n=4;
    for (int i = 0; i < 4; i++)
    {
        a[c+i]=b[i];
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}