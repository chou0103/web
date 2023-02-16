#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

int laSnt(int x)
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

int demUoc(int x)
{
	int dem1=0;
	int dem2=0;
	for(int i=1; i<=x; i++)
	{
		if(laSnt(i) && x%i==0)
		{
			dem1++;
		}
		if(x%i==0)
		{
			dem2++;
		}
	}
	printf("%d\n%d\n", dem2, dem1);
}


int main()
{
	int n;
	scanf("%d", &n);
	
	demUoc(n);

	return 0;
}

