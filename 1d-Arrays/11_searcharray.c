#include <stdio.h>
int main()
{
    int b,flag,a[5]={1,4,57,7,5};
    char c,n;
    printf("which Number : ");
    scanf("%d",&b);
    for (int i = 0; i < 5; i++)
    {
        if(b==a[i])
        {
            flag=1;
            break;
        }
       
    }
    if (flag==1)
    {
        printf("This number is present ");
    }
    else
    {
        printf("This number is not present");
    }
    
    return 0;
    
}