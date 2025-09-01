#include <stdio.h>

int main() {
    label:
    int a,b=0;
    printf("Which table do you want : ");
    scanf("%d",&a);
    if(a==0)
    {
        goto end;
    }
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
        
    }
    
    printf("GIVE 0 TO EXIT\n");
    goto label;
    end:
    printf("You have succesfully Exited from program ");

    return 0;
}