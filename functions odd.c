#include <stdio.h>
int oddy(int a)
{
    if(a%2==0)
    {
        printf("The number %d is even\n",a);

    }
    else
    {
        printf("The number %d is odd\n",a);
    }
}

int main()
{
    oddy(3);
    oddy(5);
    oddy(34712);
}