#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 1000

//chua nop duoc

long long nhanBpCoLap(long long A, long long m, long long k)
{
	long long arr[MAX];
	int index=0;
	while(k>0)
	{		
		arr[index++] = k%2;
		k /= 2;		
	}
	
	long long b;
	if(arr[0] == 0)
		b = 1;		
	else
		b = A;				
	for(long long i=1; i<index; i++)
	{
		A = (A*A)%m;
		if(arr[i] != 0)
			b = (A*b)%m;			
	}
	return b;
}

int mbTest(long long n)
{
	long long s=0 ;
	long long r = n-1;
	if(r==1)
		return true;
	else
	{
		while(1)
		{
			if(r%2 == 0)
			{
				s++;
				r /= 2;
			}
			else
				break;
		}
	}
		
	long long a=2, j=1;	//2<=a<=n-2
	long long y = nhanBpCoLap(a,n,r);
	for(long long i=1; i<=4; i++)
	{
		if(y != 1 && y != (n-1))
		{
			while(j <= (s-1) && y != (n-1))
			{
				y = nhanBpCoLap(y,n,2);
				if(y==1)
					return true;
				j++;
			}
			if(y != (n-1))
				return false;
		}		
		a++;
	}
}


int main()
{
	long long n, a[MAX];
	scanf("%lld", &n);

	for(long long i=2; i<=n; i++)
	{
		if(mbTest(i))
			printf("%d ", i);
	}


	return 0;
}

