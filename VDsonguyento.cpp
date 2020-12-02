#include<stdio.h>
#include<math.h>
main()
{
	int n, S=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("ko phai so nto");
			return 0;
		}	
	}
	printf("la so nguyen to");
}

