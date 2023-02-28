#include <stdio.h>
#include <math.h>
#define MAX 100

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

int main()
{
	long long a,b;
	scanf("%lld%lld", &a, &b);
	printf("%lld", nhanBpCoLap(a,1000000007,b));
	
	return 0;
}

