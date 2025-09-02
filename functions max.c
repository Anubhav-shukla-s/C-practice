#include <stdio.h>
int checker(int num1,int num2)
{
    if(num1>num2)
    {
        printf("%d is greater number\n",num1);
        
    } 
    else
    {
        printf("%d is greater number\n",num2);

    }
    return 0;
}

int main()
{
    checker(3,4);
    checker(4,5);
    checker(34,35);

}
