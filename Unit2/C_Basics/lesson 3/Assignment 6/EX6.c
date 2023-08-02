#include <stdio.h>
int main(void)
{
	int a, b,z;
	printf("Enter value of a :");
	scanf("%d",&a);
	printf("Enter value of b :");
	scanf("%d",&b);
	z=a;
	a=b;
	b=z;
	
	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);

	return 0;
}