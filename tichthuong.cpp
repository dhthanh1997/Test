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
	{
		if(b==0)
			printf("ko the in ra");
		if(b!=0) 		
			printf("a/b = %f", (float)a/b);
	}
	else
		printf("a*b = %d", a*b);	
}

