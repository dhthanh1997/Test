#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("So phan tu mang = ");
	scanf("%d", &n);
	int a[n], min=a[0], kiemtra; 
	for(int i=1;i<=n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]<min&&a[i]>0)
		{
			kiemtra=1;
			min = a[i];
			printf("So duong be nhat trong mang = %d", min);
			break;
		}
	}
	if(kiemtra==0)
		printf("ko co so duong be nhat");
}

