#include<stdio.h>
#include<math.h>
main()
{
	int n, S, S1=1, S2=1;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n==1||n==2)
		return 1;
	for(int i=1;i<=n;i++)
	{
		S=S1+S2;
		S1=S2;
		S2=S;
	}
	printf("So thu %d cua day Fibo la %d", n, S);
}

