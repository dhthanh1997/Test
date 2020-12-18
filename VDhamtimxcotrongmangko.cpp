#include<stdio.h>
#include<math.h>
void input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void timkiem(int a[], int n)
{
	int x, y=0;
	printf("Nhap x = ");
	scanf("%d", &x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			y=1;
			printf("%d co trong mang", x);
			break;
		}
	}
	if(y==0)
		printf("%d ko co trong mang", x);
}
main()
{
	int n, a[n];
	printf("So phan tu mang = ");
	scanf("%d", &n);
	input(a,n);
	timkiem(a,n);
}

