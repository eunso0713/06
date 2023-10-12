#include <stdio.h>


int factorial(int n)
{
	int i;
	int res=1;
	for(i=1; i<=n; i++)
	{
		res*=i;
	}
	return res;
}

int C(int n, int r)
{
	return factorial(n)/(factorial(n-r) * factorial(r));
}

int main(void)
{
	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);
	
	
	int result=C(n, r);
	printf("result: %d\n", result);
	
	
	return 0;
}
