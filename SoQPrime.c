#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100

int isQPrime(int x)
{
	int cnt=0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
			cnt++;
	}
	
	if(cnt == 4)
		return true;
	return false;
}

void solve(int n)
{
	int cnt2=n;
	for(int i=1; i<=n; i++)
	{
		if(!isQPrime(i))
			cnt2--;
		else
			printf("%d\n", i);
	}
	if(cnt2==0)
		printf("No");
}

int main()
{
	int n;
	scanf("%d", &n);
	
	solve(n);

	return 0;
}

