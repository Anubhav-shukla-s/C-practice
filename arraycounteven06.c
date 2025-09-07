#include <stdio.h>
int main()
{
    int odd=0,even=0,a[5]={23,68,79,76,32};
    

    for (int i = 0; i < 5; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }    
        printf("There are %d even numbers in array\n ",even);
        printf("There are %d odd numbers in array \n",odd);
        
    
    return 0;
}