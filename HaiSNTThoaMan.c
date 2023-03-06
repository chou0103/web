#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

int isPrime(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=sqrt(x); i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}

void solve(int n)
{
	int a[1000], index=0;
	for(int i=0; i<=n; i++)
	{
		if(isPrime(i))
			a[index++] = i;	
	}
		
	for(int i=0; i<index-1; i++)
	{
		for(int j=i; j<index; j++)
		{
			if(isPrime(a[i]+a[j]) && isPrime(a[j]-a[i]))
				printf("%d\n%d\n", a[i], a[j]);
		}	
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	solve(n);

	return 0;
}

