#include <stdio.h>
int GiaiThua(int n)
{
    int gt=1;
    for (int i=1;i<=n;i++) gt*=i;
    return gt;
}
