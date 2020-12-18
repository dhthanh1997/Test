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
void sole(int a[], int n)
{
	printf("\nDay so le trong mang: ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%4d", a[i]);
		}
	}
}
main()
{
	int n, a[n];
	printf("So phan tu mang = ");
	scanf("%d", &n);
	input(a,n);
	sole(a,n);
}

