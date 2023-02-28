#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

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

int isSuperPrime(int n)
{
	int cnt=0;
	for(int i=1; i<n; i++)
	{
		if(isPrime(i))
			cnt++;
	}
	if(isPrime(cnt))
		return true;
	return false;
}

int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	int cnt=0;
	for(int i=a; i<=b; i++)
	{
		if(isSuperPrime(i))
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}

