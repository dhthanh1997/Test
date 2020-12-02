#include<stdio.h>
#include<math.h>
main()
{
	int n, S=1;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		S = S*i;
	}
	printf("%d! = %d", n, S);
}

