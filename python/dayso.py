n = input('n = ')
s = 0
for i in range(1,n+1):
	if(i%2==0):
		s = s + i;
print 's = 2 + 4 + ... + %d = %d' %(n,s)
