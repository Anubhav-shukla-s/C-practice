 #include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the number to reverse it : ");
	scanf("%d",&a);
	
	do 
	{
		printf("%d\n",a);
		a--;
	} while (a>=0);
	
	return 0;
}
