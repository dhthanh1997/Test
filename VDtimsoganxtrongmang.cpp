#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("So phan tu mang = ");
	scanf("%d", &n);
	int a[n]; //float a[n] : khai bao n so thuc
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int x, high = 0;
	printf("Nhap x = ");
	scanf("%d", &x);
	for(int i=0;i<n;i++)
	{
		if(a[i]>high)
		{
			high = a[i];
		}
	}
	int high2 = high;
	for(int i=0;i<n;i++)
	{
		if(a[i]<high&&a[i]<x)
		{
			high2 = a[i];
			break;
		}
	}
	if(high2 == high)
	{
		printf("toan so lon nhat");
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<high&&a[i]>high2&&a[i]<x)
		{
			high2 = a[i];
		}
	}
	printf("\nTiem can duoi cua x trong mang = %d", high2);
}


