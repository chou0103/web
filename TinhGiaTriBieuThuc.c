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

int demUocNt(int x)
{
	int dem1=0;
	int s1=0;
	for(int i=1; i<=x; i++)
	{
		if(laSnt(i) && x%i==0)
		{
			dem1++;
			s1 += i;
		}
	}
	return (dem1+s1);
}

int demUoc(int x)
{
	int dem2=0;
	int s2=0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
		{
			dem2++;
			s2 += i;
		}
	}
	return dem2+s2;
}


int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d", n+demUoc(n)-demUocNt(n));

	return 0;
}

