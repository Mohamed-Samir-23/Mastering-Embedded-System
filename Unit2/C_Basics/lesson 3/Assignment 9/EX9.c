#include <stdio.h>
int main(void)
{
	
	int i;
	printf("Enter an alphabet: ");
	scanf("%c",&i);
	if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
	{
		printf("%c is vowel\n",i);
	}
	else
	{
		printf("%c is consonant\n",i);
	}
	
	return 0;
}