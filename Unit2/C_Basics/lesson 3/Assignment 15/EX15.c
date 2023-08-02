#include <stdio.h>
int main(void)
{
	char op=0;
	printf("Enter operator either + or - or * or divide : ");
	scanf("%c",&op);
	float a,b;
	printf("Enter an number 1 : ");
	scanf("%f",&a);
	printf("Enter an number 2 : ");
	scanf("%f",&b);
	switch(op)
	{
		case '+':printf("%0.2f + %0.2f =%0.2f\n",a,b,(float)(a+b));break;
		case '-':printf("%0.2f - %0.2f =%0.2f\n",a,b,(float)(a-b));break;
		case '*':printf("%0.2f * %0.2f =%0.2f\n",a,b,(float)(a*b));break;
		case '/':printf("%0.2f / %0.2f =%0.2f\n",a,b,(float)(a/b));break;
		default:printf("not valid operator \n");break;
	}
	return 0;
	
	
}