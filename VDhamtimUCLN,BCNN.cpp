#include<stdio.h>
#include<math.h>
int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a%b);
}
int BCNN(int a, int b)
{
	return abs(a*b)/(UCLN(a,b));
}
main()
{
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("\nUCLN = %d", UCLN(a,b));
	printf("\nBCNN = %d", BCNN(a,b));
}

