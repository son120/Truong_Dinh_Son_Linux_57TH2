#include <stdio.h>
#include <math.h>
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
