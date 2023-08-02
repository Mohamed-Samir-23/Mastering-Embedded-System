#include <stdio.h>
int main(void)
{
	unsigned long long int i=0,fac=1;
	int j;
	printf("Enter a integer: ");
	scanf("%d",&i);
	if(i==0)
	{
		printf("you enter zero\n");
	}
	else if(i>0)
	{
		for(j=1;j<=i;j++)
		{
			fac*=j;
		}
		printf("factorial = %llu\n",fac);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist\n");
	}
	return 0;
	
	
}