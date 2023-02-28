#include <stdio.h>
#include <math.h>
#define MAX 1005

int isPrime(int x)
{
	if(x<2)
		return 0;
	for(int i=2; i<=sqrt(x); i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}

int max(int a, int b)
{
	return a>b?a:b;
}

void solve(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i] == 1)
			a[i] = 0;
		if(!isPrime(a[i]))
			a[i] = 0;
	}
	int sub=0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(isPrime(a[i]) && isPrime(a[j]))
			{
				int tam = abs(a[i]-a[j]);
				sub = max(sub,tam);
			}			
		}
	}
	printf("%d", sub);
}

int main()
{
	int n, a[MAX];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	solve(a, n);
	
	return 0;
}

