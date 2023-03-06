#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define true 1
#define false 0

int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int isPrime(int n)
{
	if(n<2)
		return false;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int getPhiN(int *p, int *q)
{
	srand(time(0));
	do
	{
		*p = rand() % (499-101+1) + 101;
	} 
	while(!isPrime(*p));
	do
	{
		*q = rand() % (499-101+1) + 101;
	} 
	while(!isPrime(*q));
	return (*p-1) * (*q-1);
}

int getE(int phiN)
{
	int e = 2;
	while(gcd(e, phiN) != 1 && e<phiN )
	{
		e++;
	}
	return e;
}

int getD(int e, int phiN)
{
	int d=1;
	while((d*e % phiN) != 1)
	{
		d++;
	}
	return d;
}

int findNumber(char str[])
{
	char num[20];
	int cnt = 0;
	for(int i=0; i<strlen(str); i++)
	{
		if(isdigit(str[i]))
			num[cnt++] = str[i];
	}
	int sbd = atoi(num);
	return sbd;
}

int encodeAndDecode(int a, int k, int m)
{
	int b = 1;
	if(k==0)
		return b;
	else
	{
		if(k%2 == 1)
			b = a;
		k /= 2;
		while(k != 0)
		{
			a = a*a % m;
			if(k%2 == 1)
				b = b*a % m;
			k /= 2;
		}
	}
	return b;
}

int main()
{
	int p, q, n, phi, e, d, c, m;
	
	char sbd[30];
	printf("Nhap SBD: ");
	scanf("%s", &sbd);

	phi = getPhiN(&p, &q);
	e = getE(phi);	
	d = getD(e, phi);
		
	m = findNumber(sbd) + 123;	
	n = p * q;
	c = encodeAndDecode(m, e, n);
	printf("Ma hoa: c = %d\n", c);
	printf("Giai ma: m = %d\n", encodeAndDecode(c, d, n));

	return 0;
}

