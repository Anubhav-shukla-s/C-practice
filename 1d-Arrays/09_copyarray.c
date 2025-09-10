#include <stdio.h>
int main()
{
    int i,n[5], a[5] = {1, 2, 3, 4, 5} ;
    for (int i = 0; i < 5; i++)
    {
        n[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}