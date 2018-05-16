#include <stdio.h>
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

