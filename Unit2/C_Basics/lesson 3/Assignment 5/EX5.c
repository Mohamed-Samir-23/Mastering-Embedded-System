#include <stdio.h>
int main(void)
{
	char x;
	printf("##########Console-output###\n");
	printf("Enter a character: ");
	scanf("%c",&x);
	printf("ASCII value of %c : %d\n",x,x);
	printf("###########################\n");
	
	return 0;
}