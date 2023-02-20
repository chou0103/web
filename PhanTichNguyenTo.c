#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 1000

long long a[MAX], b[MAX];

void phanTichSo(long long n)
{
	int i1=0, i2=0;	
	if(n==1)
		a[i1++] = b[i2++] = 1;
	for(int i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				cnt++;
				n /= i;
			}
			a[i1++] = i;
			b[i2++] = cnt;
		}
	}
	
	printf("[");
	for(int i=0; i<i1; i++)
	{
		printf("%d", a[i]);
		if(i!=i1-1)
			printf(", ");
	}
	printf("]\n");
	printf("[");
	for(int i=0; i<i2; i++)
	{
		printf("%d", b[i]);
		if(i!=i2-1)
			printf(", ");
	}
	printf("]\n");		
}

int main()
{
	long long n;
	scanf("%lld", &n);
	phanTichSo(n);

	return 0;
}

