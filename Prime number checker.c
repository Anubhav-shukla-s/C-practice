 #include <stdio.h>
int main()
{
	int i,a,flag=0;
	printf("ENTER YOUR NUMBER TO CHECK IF IT'S PRIME NUMBER OR NOT : ");
	scanf("%d",&a);
	
	if(a<=1)
	{
		printf("%d not a prime number",a);
		
	}
	
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
		
			flag=1;
			break;
		}
	}
		if (flag==0)
		{
			printf("%d is a prime number",a);
			;
		}else
		printf("%d is not a prime number",a);
	
	
	return 0;
}
