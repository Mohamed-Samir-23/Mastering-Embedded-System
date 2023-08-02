#include <stdio.h>
int main(void)
{
	int i=0;
	printf("Enter a number :\n");
	scanf("%d",&i);
	if(i==0)
	{
		printf("you enter zero\n");
	}
	else if(i>0)
	{
		printf("%d is positive\n",i);
	}
	else
	{
		printf("%d is negative\n\n",i);
	}
	return 0;
	
	
}