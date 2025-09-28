#include <stdio.h>
int main()
{
    int i=0;
    char str[20];
    gets(str);
    while (str[i]!='\0')
    {
        i++;
    }
    
    


    printf("%d",i);
}