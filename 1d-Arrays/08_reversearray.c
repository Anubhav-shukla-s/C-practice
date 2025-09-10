#include <stdio.h>
int main()
{
    int a[5]={23,45,43,53,32};
    int n=5;
    for (int i = 0; i < n/2; i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
