#include <stdio.h>
int main()
{
    int a,f=1,i;
    printf("Give number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d\n",a,f);
    return 0;

}