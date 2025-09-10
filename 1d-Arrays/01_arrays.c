#include <stdio.h>
int main()
{
    int i,age[5];
    for (int i = 0; i < 5; i++)
    {
         printf("Give %d value : ",i);
        scanf("%d",&age[i]);
    }

    printf("The Values are :  ");
   for (int i = 0; i < 5; i++)
   {
    
   
    printf("%d ",age[i]);
   }

    
 return 0;
}
