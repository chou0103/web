#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100

//chua nop duoc

int max(int a, int b)
{
	return a>b ? a:b;
}

void sieve(int a, int b)
{
	int prime[b-a+1];
	for(int i=0; i<b-a+1; i++)
		prime[i] = 1;
	for(int i=2; i<=sqrt(b); i++)
	{
		for(int j=max(i*i, (a+i-1)/i*i); j<=b; j+=i)
			prime[j-a] = 0;
	}
	for(int i=max(2,a); i<=b; i++)
	{
		if(prime[i-a] && isCubeNumber(reverse(i)))
		{
			printf("%d\n", i);
		}
	}
}

int reverse(int n)
{
	int rev=0, r;
	while(n>0)
	{
		r = n%10;
		rev = rev*10 + r;
		n /= 10;
	}
	return rev;	
}

int isCubeNumber(int n)
{
	float x = pow(n, 1.0/3);
	if(pow(x, 3)==n)
		return true;
	return false;
}

int main()
{
	sieve(100,999);

	return 0;
}

