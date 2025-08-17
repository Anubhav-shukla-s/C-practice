#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("1-Addition\n");
	printf("2-Multilplication\n");
	printf("3-Divsion\n");
	printf("4-Subtraction\n");
	scanf("%d",&a);
	
	printf("Give number A :");
	scanf("%d",&c);
	printf("Give number B :");
	scanf("%d",&b);
	
	if(a==1)
	{ printf("You chose addition\n");
	d=c+b;
	
	printf("Your answer of addition is %d\n",d);
	}
	
	else if (a==2)
	{ printf("You chose Multiplication\n");
	e=c*b;
	
	printf("Your answer of Multiplication is %d\n",e);
	}
	
	else if (a==3)
	{ printf("You chose Division\n");
	f=c/b;
	
	printf("Your answer of Division is %d\n",f);
	}
	
	else if (a==4)
	{ printf("You chose Subtraction\n");
	g=c-b;
	
	printf("Your answer of Subtraction is %d\n",g);
	}
	
	return 0;
}
