#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	float S=0;
	for(int i=1;i<=n;i++)
	{
		S=S+1.0/i;
	}
	printf("%f", S);
}

