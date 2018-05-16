#include <stdio.h>
#include <math.h>
long GiaiThua(int n)
{
    long gt=1;
    for (int i=2;i<=n;i++) gt*=i;
    return gt;
}

int TongChan(int n)
{
	int s=0;
	for(int i=2; i<=n; i++)
	{
		if(i%2 == 0)
		{
			s+=i;
		}
	}
	return s;
}

int LuyThua(int a, int n)
{
	if(n == 1) {
        return a;
    } else {
        int temp = LuyThua(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}

int main()
{
	int n=5, a=2;
	printf("Giai thua cua %d = %ld \n",n,GiaiThua(n));
	printf("Tong chan cua %d = %d \n",n,TongChan(n));
	//printf("Tong le cua %d = %d \n",n,TongLe(n));
	printf("Luy thua %d mu %d = %d \n",a,n, LuyThua(a,n));
	return 0;
}


