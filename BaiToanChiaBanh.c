#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100

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

void chiaBanh(int n)
{
	int cnt=0;
	for(int i=1; i<=n; i++)
	{
		if(isPrime(i))
		{
			if(i<=n && isPrime(n-i))
				cnt++;			
		}		
	}
	if(cnt!=0)
		printf("Deepa\n");
	else
		printf("Arjit\n");	
}

int main()
{
	int t, m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &m);
		chiaBanh(m);
	}

	return 0;
}

