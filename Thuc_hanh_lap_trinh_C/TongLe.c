#include <stdio.h>
int TongLe(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
	{
		if(i%2 != 0)
		{
			s+=i;
		}
	}
	return s;
}
