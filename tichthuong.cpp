#include<stdio.h>
#include<math.h>
main()
{
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	if(a>=b)
		printf("a/b = %f", (float)a/b);
	else
		printf("a*b = %d", a*b);	
}

