#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 1000


int nhanBpCoLap(int A, int m, int k)
{
	int arr[MAX];
	int index=0;
	while(k>0)
	{		
		arr[index++] = k%2;
		k /= 2;		
	}
	
	int b;
	if(arr[0] == 0)
		b = 1;		
	else
		b = A;				
	for(int i=1; i<index; i++)
	{
		A = (A*A)%m;
		if(arr[i] != 0)
			b = (A*b)%m;			
	}
	return b;
}

int mbTest(int n)
{
	int s=0 ;
	int r = n-1;
	if(r==1)
		return true;
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
	
	int a=2, j=1;	//2<=a<=n-2
	int y = nhanBpCoLap(a,n,r);
	for(int i=1; i<=4; i++)
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
	int n, a[MAX];
	scanf("%d", &n);

//	if(mbTest(n))
//		printf("La nguyen to");
//	else
//		printf("La hop so");

	for(int i=2; i<=n; i++)
	{
		if(mbTest(i))
			printf("%d ", i);
	}


	return 0;
}

