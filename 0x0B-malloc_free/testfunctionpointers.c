#include <stdio.h>

int multiplyInt(int a, int b)
{
return (a * b);
}

#include <stdio.h>

int main (void)
{
	int a = 2;
	int b = 3;
	int ans;
	ans = multiplyInt(a, b);
	printf("%d mulitiplied by %d = %d \n",a ,b , ans );
return (0);
}
