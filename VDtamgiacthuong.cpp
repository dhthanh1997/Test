#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c, P;
	float S, p;
	do
	{
		scanf("%d%d%d", &a, &b, &c);
	}
	while(!(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a));
	P = a+b+c;
	p = (float)(a+b+c)/2;
	S = (float)(sqrt(p*(p+a)*(p+b)*(p+c)));
	printf("\n%d va %f", P, S);
}

