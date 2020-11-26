#include<stdio.h>
main()
{
	int a;
	printf("Nhap a = ");
	scanf("%d", &a);
	if(a>1&&a<8)
		printf("\nDay la thu 2-7");
	if(a==8)
		printf("\nDay la chu nhat");
	if(a<2||a>8)
		printf("\nKhong phai ngay trong tuan");	
	return 0;		
}

