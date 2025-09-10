#include <stdio.h>
int main()
{

    int  s, i, a[5] = {6, 5, 3, 2, 1};
    for (int j = 0; j < 5- 1; j++)
    {
        int flag = 0;

        for (int i = 0; i < 4; i++)
        {
            if (a[i] > a[i + 1])
            {
                s = a[i];
                a[i] = a[i + 1];
                a[i + 1] = s;
                flag = 1;
            }
        }
        if (flag==0)
        {
            break;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}