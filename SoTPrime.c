#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100

int demUoc(int x)
{
	int cnt=1;
	for(int i=1; i<=x/2; i++)
	{
		if(x%i==0)
			cnt++;
	}	
	return cnt;
}

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		if(demUoc(i) == 3)
			printf("%d\n", i);
	}
	

	return 0;
}


