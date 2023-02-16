#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

long long max(long long a, long long b)
{
	return a>b ? a:b;
}

void sieve(long long a, long long b)
{
	long long prime[b-a+1];
	for(long long i=0; i<b-a+1; i++)
		prime[i] = 1;
	for(long long i=2; i<=sqrt(b); i++)
	{
		for(long long j=max(i*i,(a+i-1)/i*i); j<=b; j+=i)
		{
			prime[j-a] = 0;
		}
	}
	for(long long i=max(a,2); i<=b; i++)
	{
		if(prime[i-a])
			printf("%.1lf\n", (double)i);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long A = pow(10, n-1);
	long long B = pow(10, n)-1;
	sieve(A,B);

	return 0;
}

