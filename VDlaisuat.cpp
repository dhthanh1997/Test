#include<stdio.h>
#include<math.h>
main()
{
	int a = 4000;
	float b, c, d, e;
	b = a*0.08+a;
	c = b*0.08+b;
	d = c*0.08+c;
	e = d*0.08+d;
	printf("Tong tien thu duoc la %f", e); 
}
