#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int reverse(int n)
{
	int rev=0, r;
	while(n>0)
	{
		r = n%10;
		rev = rev*10 + r;
		n /= 10;
	}
	return rev;
}

int isEmirp(int n)
{
	if(!isPrime(n))
		return false;
	return isPrime(reverse(n));
}

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<n; i++)
	{
		if(isEmirp(i))	
			printf("%d\n", i);
	}


	return 0;
}

