#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define true 1
#define false 0
#define MAX 100001

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

void solve2(char c[])
{
	//a:97->z:122
	int cnt[26] = {0};
	int cnt2=0, s=0;
	for(int i=0; i<strlen(c); i++)
		cnt[c[i]-'a']++;
	for(int i=0; i<26; i++)
	{
		if(cnt[i] != 0)
		{
			s++;		
		}	
		if(isPrime(cnt[i]))
			cnt2++;			
	}	
	if(cnt2==s && isPrime(s))
		printf("YES\n");
	else
		printf("NO\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	fflush(stdin);
	while(t--)
	{
		char str[MAX];
		scanf("%s", c);
		solve2(str);
	}

	return 0;
}

