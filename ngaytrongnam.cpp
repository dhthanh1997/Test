#include<stdio.h>
#include<math.h>
main()
{
	int x, y, g, i, T; //thang = y, ngay = x, neu T = 8 thi la ngay CN
	printf("Nhap ngay x = ");
	scanf("%d", &x);
	printf("Nhap thang y = ");
	scanf("%d", &y);
	if(y<1||y>12||x<1||x>31)
	{
		printf("ko phai ngay thang trong nam");
		return 0;
	}
	if(y==1)
	{
		g=x;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);	
	}
	if(y==2)
	{
		if(x>28)
			printf("ko phai ngay thang trong nam");
		else
		{
			g=x+31;
			T=1+g%7;
			if(T==1)
				printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
			else 
				printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
		}
	}
	if(y==3)
	{
		g=x+59;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);	
	}
	if(y==4)
	{
		if(x>30)
			printf("ko phai ngay thang trong nam");
		else
		{
			g=x+90;
			T=1+g%7;
			if(T==1)
				printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
			else 
				printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
		}
	}
	if(y==5)
	{
		g=x+120;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
	}
	if(y==6)
	{
		if(x>30)
			printf("ko phai ngay thang trong nam");
		else
		{
			g=x+151;
			T=1+g%7;
			if(T==1)
				printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
			else 
				printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);	
		}
	}
	if(y==7)
	{
		g=x+181;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
	}
	if(y==8)
	{
		g=x+212;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);	
	}
	if(y==9)
	{
		if(x>30)
			printf("ko phai ngay thang trong nam");
		else
		{
			g=x+243;
			T=1+g%7;
			if(T==1)
				printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
			else 
				printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
		}
	}
	if(y==10)
	{
		g=x+273;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);	
	}
	if(y==11)
	{
		if(x>30)
			printf("ko phai ngay thang trong nam");
		else
		{
			g=x+304;
			T=1+g%7;
			if(T==1)
				printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
			else 
				printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
		}
	}
	if(y==12)
	{
		g=x+334;
		T=1+g%7;
		if(T==1)
			printf("%d/%d la ngay thu %d trong nam va la chu nhat",x, y, g);
		else 
			printf("%d/%d la ngay thu %d trong nam va la thu %d", x, y, g, T);
	}
}

