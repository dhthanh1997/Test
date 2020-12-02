#include<stdio.h>
#include<math.h>
main()
{
	int n, S=0;
	printf("Nhap n = ");
	scanf("%d", &n);
//	for(int i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		{
//			S=S+i;
//		}
//	}
//	printf("%d", S);
	for(int i=1;i<=n;i=i+2)
	{
		S=S+i;	
	}
	printf("%d", S);
}

