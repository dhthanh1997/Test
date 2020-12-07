#include<stdio.h>
#include<math.h>
main()
{
	int n, S=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf(" %d", i);
			S=S+i;
		}
	}
	printf("\nTong uoc cua %d la: %d", n, S);
}

