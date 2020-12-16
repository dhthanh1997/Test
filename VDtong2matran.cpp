#include<stdio.h>
#include<math.h>
main()
{
	int m, n;
	printf("Nhap hang ma tran: m = ");
	scanf("%d", &m);
	printf("Nhap cot ma tran: n = ");
	scanf("%d", &n);
	int a[m][n], b[m][n], c[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Tong 2 ma tran: \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}

