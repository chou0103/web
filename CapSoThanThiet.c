#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

int tongUoc(int n)
{
	int sum=0;
	for(int i=1; i<=n/2; i++)
	{
		if(n%i==0)
		{
			sum += i;
		}
	}
	return sum;
}

int solve(int n)
{	
	for(int i=1; i<n; i++)
	{
		int x = tongUoc(i);
		if(tongUoc(x) == i && x<n && x>i && i != tongUoc(i))
			printf("%d %d\n", i, x);
	}
}



int main()
{
	int n;
	scanf("%d", &n);
	solve(n);

	return 0;
}

