#include <stdio.h>
int main(void)
{
	int i;
	printf("Enter an integer you want to check: ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("%d is even\n",i);
	}
	else
	{
		printf("%d is odd\n",i);
	}
	return 0;
	
	
}