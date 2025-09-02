#include <stdio.h>
//anubhav=sum 
int anubhav(int num1,int num2)
{
    int sum=num1+num2;
    printf("Sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}
int multi(int a,int b)
{
    int mo=a*b;
    printf("After multilplying %d and%d the ans is %d\n",a,b,mo);
    return 0;
}
int main()
{
anubhav(2,3);
anubhav(3,4);
 multi(3,6);
return 0;
}