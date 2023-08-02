#include <stdio.h>
int main(void)
{
	
	float a,b,c;
	printf("Enter an number 1 : ");
	scanf("%f",&a);
	printf("Enter an number 2 : ");
	scanf("%f",&b);
	printf("Enter an number 3 : ");
	scanf("%f",&c);
	if(a>=b)
	{
		if(a>=c)
		{
			
			printf("Largest number = %f\n",a);
		}
		else
		{
			printf("Largest number = %f\n",c);
		}
			
	}
	else
	{
		if(b>=c)
		{
			
			printf("Largest number = %f\n",b);
		}
		else
		{
			printf("Largest number = %f\n",c);
		}
		
		
	}
	return 0;
	
	
}