#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number a=");
	scanf("%d",&a);
	printf("Enter the number b=");
	scanf("%d",&b);
	printf("Enter the number c=");
	scanf("%d",&c);
	
	if ((a>=b) && (a>=c))
	{printf("A is greatest number %d given by user",a);
	}
	else if ((b>=c) && (b>=a))
	{printf("B is greatest number %d given by user",b);
	}
	else if((c>=b) && (c>=a))
	{printf("C is greatest number %d given by user",c);
	}
	return 0;
}
