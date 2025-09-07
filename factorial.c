#include <stdio.h>
int factorial(int a)
{
    
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;

}
int main()
{
    int c;
    printf("Give your number to make factorial : ");
    scanf("%d",&c);

    printf("The factorial of %d is %d",c,factorial(c));
    return 0;

}