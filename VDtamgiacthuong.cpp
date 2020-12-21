#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c, P;
	float S, p;
	printf("Nhap canh 1 = ");
	scanf("%d", &a);
	printf("Nhap canh 2 = ");
	scanf("%d", &b);
	printf("Nhap canh 3 = ");
	scanf("%d", &c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	{
		P = a+b+c;
		p = (float)(a+b+c)/2;
		S = (float)(sqrt(p*(p+a)*(p+b)*(p+c)));
		printf("\nS = %f", S);
	}
	else
		printf("Day ko phai 3 canh tam giac");
}

