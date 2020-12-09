#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("So phan tu mang = ");
	scanf("%d", &n);
	int a[n]; 
	for(int i=1;i<=n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for(int i=n;;i--)
	{
		if(a[i]%2==0)
		{
			continue;
		}
		else if(a[i]%2==1)
		{
			printf("so le cuoi cung trong mang la %d", a[i]);
			break;
		}
	}
}

