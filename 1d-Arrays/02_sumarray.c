#include <stdio.h>
int main()
{
    int i,sum=0,a[5]={3,3,5,6,9};
    
    for (i=0; i < 5; i++)               
    {
        sum = sum+a[i];
    }
    printf("%d",sum);
    return 0;

}
