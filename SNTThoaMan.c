#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100

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

void demSnt(int n)
{
	int cnt=0;
	for(int i=1; i<=n; i++)
	{
		if(isPrime(i))
		{
			cnt++;
		}
			
	}
	printf("%d\n", cnt);
}

int main()
{
	int n;
	scanf("%d", &n);
	
	demSnt(n);

	return 0;
}

