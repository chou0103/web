#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 10001

int prime[MAX];

void solve(int n)
{
	for(int i=0; i<MAX; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i=2; i<=sqrt(MAX); i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<=MAX; j+=i)
				prime[j] = 0;
		}
	}

	for(int i=2; i<n; i++)
	{
		for(int j=2; j<=i; j++)
		{			
			if(prime[j] && i%j==0 && i%(j*j)==0)
			{			
				printf("%d\n", i);	
				break;			
			}
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

