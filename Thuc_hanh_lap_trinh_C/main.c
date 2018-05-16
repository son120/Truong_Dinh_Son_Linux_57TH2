#include "libmymath.h"
#include <stdio.h>
#include <math.h>
int main()
{
	int n=5, a=3;
	printf("Giai thua cua %d = %d \n",n,GiaiThua(n));
	printf("Tong chan cua %d = %d \n",n,TongChan(n));
	printf("Tong le cua %d = %d \n",n,TongLe(n));
	printf("Luy thua %d mu %d = %d \n",a,n, LuyThua(a,n));
	return 0;
}
