#include<stdio.h>
int main()
{
    int j=0;
    char str[20];
    gets(str);

    while (str[j]!='\0')
    {
        j++;
    }

   
    
    for (int i=j-1  ; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    
}