#include <stdio.h>
int main(void)
{
	int i=0,j=0,sum=0;
	printf("Enter a integer: ");
	scanf("%d",&i);
	
	for(j=0;j<=i;j++)
	{
		sum+=j;
	}
	printf("sum = %d\n",sum);
	return 0;
	
	
}