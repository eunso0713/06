#include <stdio.h>

int sumTwo(int a, int b)
{
	int result;
	result=a+b;
	return result;
}

int main(void)
{
	printf("result is %d", sumTwo(3, 7));
	
	return 0;
}
