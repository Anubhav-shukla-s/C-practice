#include <stdio.h>
int main()
{
	int a,b=0,c;
	printf("Put the number you want Table of : ");
	scanf("%d",&a);
	do 
	{ 
	c=a*b;
	printf("%d x %d = %d\n",a,b,c);
	b++;
	} while (b<=10);
	return 0;
}
