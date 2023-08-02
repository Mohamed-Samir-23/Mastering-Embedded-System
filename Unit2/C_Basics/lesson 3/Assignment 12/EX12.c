#include <stdio.h>
int main(void)
{
	char i=0;
	printf("Enter a character: ");
	scanf("%c",&i);
	if((i>=65&&i<=90)||(i>=97&&i<=122))
	{
		printf("%c is an alphabet\n",i);
	}
	else
	{
		printf("%c is not an alphabet\n",i);
	}
	return 0;
	
	
}